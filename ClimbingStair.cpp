#include<iostream>
#include<map>
#include<string>
#include<vector>
#include <bits/stdc++.h>

class Solution {
public:
    static int climbStairs(int n) {
        int result = 0;
        for(int i=1; i<n-1;++i){
            for(int j =i+1; j<n;++j){
                if(n%i == 0){
                    result++;
                }
                if(i+j == n){
                    result +=2;
                }
            }
        return result;
        }
    }
};

int main(){
    std::cout<<Solution::climbStairs(4);
}
