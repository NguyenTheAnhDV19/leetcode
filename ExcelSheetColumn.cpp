#include <iostream>
#include<vector>

class Solution {
public:
    static std::string convertToTitle(int columnNumber) {
        std::string title =" ";
        while(columnNumber>0){
            char a = 'A' + (columnNumber -1)%26;
            columnNumber = (columnNumber-1) /26;
            title.push_back(a);
        }
        return title;
    }
};

int main(){
    int columnNumber = 27;
    std::cout<<Solution::convertToTitle(columnNumber);
    return 0;
}
