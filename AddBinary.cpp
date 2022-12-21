#include<iostream>
#include<map>
#include<string>
#include<vector>
#include <bits/stdc++.h>

class Solution {
public:
    static std::string addBinary(std::string a, std::string b) {
        int number1 = std::stoi(a); int number2 = std::stoi(b);
        int total = number1+number2;
        std::string result = std::to_string(total);
        for(int i=result.size()-1;i>=0; --i){
                if(result[i] == '2'){
                    result[i] ='0';
                    if(i != 0){
                        result[i-1] ='2';
                    }else{
                        result.insert(result.begin(),'1');
                    }
            }
        }
        return result;
    }
};
int main(){
    std::string number1 = "111", number2 = "001";
    std::cout<<Solution::addBinary(number1,number2);
}

