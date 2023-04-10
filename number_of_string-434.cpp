#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>
#include "Node.h"
#include<unistd.h>
#include<cmath>
#include <cstdlib>
#include <bitset>
#include<bits/stdc++.h>
#include <stdlib.h>


class Solution {
public:
    int countSegments(std::string s) {
        std::map<std::string,int>store;
        int temp =0;
        int result =0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ' || i==s.size()-1)
            {
                std::string stemp = s.substr(temp,i-temp+1);
                std::cout<<stemp<<std::endl;
                if((store.find(stemp) != store.end())){
                    store[stemp]++;
                }
                else{
                    store.insert({stemp,1});
                }
                temp = i+1;
            }
        }
        for(auto it=store.begin();it != store.end();it++)
        {
            result++;
        }

        return result;
    }
};

int main()
{
    std::string s = "Hello, my name is John";
    Solution* solution = new Solution();
    std::cout<<solution->countSegments(s);
    return 0;
}
