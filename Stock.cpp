#include <iostream>
#include<vector>


class Solution {
public:
    static int maxProfit(std::vector<int>& prices) {
        int profit =0;
        for(int i=prices.size() -1;i>=0;--i){
            for(int j=i-1;j>=0;--j){
                int result = prices[i] - prices[j];
                result > profit ? profit = result : profit = profit;
            }
        }
        return profit;
    }
};


int main(){
    std::vector<int> prices = {7,1,5,3,6,4};
    std::cout<<Solution::maxProfit(prices)<<std::endl;
    return 0;
}
