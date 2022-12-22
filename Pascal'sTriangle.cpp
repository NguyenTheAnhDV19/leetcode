#include <iostream>
#include<vector>

class Solution {
public:
    static void generate_(int numRows, std::vector<std::vector<int>>& vect) {
        std::vector<int> row;
        for(int i=0;i<numRows;++i){
            row.push_back(1);
            for(int j=0;j<i;++j){
               row[j] = row[j+1] + row[j];
            }
        vect.push_back(row);
        }
    }
};

int main(){
    std::vector<std::vector<int>> vect ;
    Solution::generate_(5,vect);
    for(int i=0;i<vect.size();++i){
       for(int j=0;j<vect.size();++j){
        std::cout<<vect[i][j]<<std::endl;
        }
    }
    return 0;
}
