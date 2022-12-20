#include<iostream>
#include<map>
#include<string>

class Solution{
    public:
    std::string romanNum;

    Solution(std::string romanNum){
        this->romanNum = romanNum;
    }

    int romanToInt(){
        int currenValue =1000;
        int result =0;
        std::map<char,int> dic{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        for(auto character : romanNum){
            if(dic[character] > currenValue){
                result -= dic[character];
            }else{
                result += dic[character];
            }
            currenValue = dic[character];
        }
         return result;
    }
};

int main(){
    std::string romanNumber;
    getline(std::cin,romanNumber);
    Solution solution(romanNumber);
    std::cout<<solution.romanToInt();
    return 0;
}
