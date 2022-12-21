#include<iostream>
#include<map>
#include<string>
#include<vector>
#include <bits/stdc++.h>

class Solution {
public:
    static float mySqrt(int x) {
        float number =x/(x/2); float result =0;
        for(int i =x/2-1; i>=1;--i){
            float numberCheck;
            (x/i >i) ? (numberCheck = x/i -i) : (numberCheck = i-x/i);
            if(number> numberCheck){
                number = numberCheck;
                result = x/i;
            }
        }
        return result;
    }
};

int main(){
    int x =10;
    std::cout<<Solution::mySqrt(x);

}
