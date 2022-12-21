#include<iostream>
#include<map>
#include<string>
#include<vector>
#include <bits/stdc++.h>

class Solution {
public:
    void plusOne(std::vector<int>& digits) {
        digits[digits.size() -1]++;
        if(digits[digits.size() -1] == 10){
            digits[digits.size() -1]--;
            digits.push_back(0);
        }
    }
};

int main(){
    std::vector<int> digits = {1,2,3,4,9};
    Solution::plusOne(digits);
    for(int i=0;i<digits.size();++i){
        std::cout<<digits[i];
    }
}
