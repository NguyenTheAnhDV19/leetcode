#include <iostream>
#include<vector>


class Solution {
public:
    static std::vector<int> getRow(int rowIndex,std::vector<std::vector<int>>& vect) {
        std::vector<int> newRow;
        for(int i=0;i<rowIndex;++i){
            newRow.push_back(1);
            for(int j=1;j<i;j++){
                newRow[j] = newRow[j] + newRow[j-1];
            }
            vect.push_back(newRow);
        }
    }
};


int main(){
    std::vector<std::vector<int>> vect;
    Solution::getRow(3,vect);
    for(int j=0;j<3;++j){
        std::cout<<vect[2][j]<<std::endl;
    }
    return 0;
}
