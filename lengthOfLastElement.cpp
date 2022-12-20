#include<iostream>
#include<map>
#include<string>
#include<vector>
#include <bits/stdc++.h>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int length = 0;
        for(int i=s.size() -1;i>= 0;--i){
            if(s[i] != ' '){
                length++;
            }else{
                break;
            }
        }
        return length;
    }
};

int main(){
    std::string hello = "Hello World";
    Solution solution;
    std::cout<<solution.lengthOfLastWord(hello);
}

