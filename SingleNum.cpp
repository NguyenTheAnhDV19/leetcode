#include <iostream>
#include<vector>

class Solution {
public:
    static int singleNumber(std::vector<int>& nums) {
        std::vector<int> vect = {0,0,0,0,0,0};
        for(int i=0;i<nums.size();++i){
            vect[nums[i]]++;
        }
        int comNum;
        for(int i=1;i<vect.size();++i){
            if(vect[i] == 1) comNum = i;
        }
        return comNum;
    }
};

int main(){
    std::vector<int> vect = {2,4,2,2,3,3,3};
    std::cout<<Solution::singleNumber(vect);
    return 0;
}
