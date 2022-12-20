#include<iostream>
#include<map>
#include<string>
#include<vector>

class Solution {
public:
    void print(int result);
    bool isValid(std::string str){
        bool result = false;
        std::map<char,char> Map = {{'{','}'}, {'(',')'}, {'[',']'}};
        for(int i=0; i<str.size()-1;++i){
            auto pair_ = Map.find(str.at(i));
            if((pair_->second) == str.at(i+1)){
                result = true;
            }else{
                result = false;
            }
        }
        return result;
    }
};

void Solution::print(int result){
    if(result == 1 ){
        std::cout<<"True";
    }else{
        std::cout<<"False";
    }
}

int main(){
    std::string str = "{}[]";
    Solution solution;
    bool result =solution.isValid(str);
    solution.print(result);
    return 0;
}
