#include<iostream>
#include<map>
#include<string>
#include<vector>
#include <bits/stdc++.h>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int count_ = count(nums.begin(),nums.end(),val);
        int length = nums.size() - count_;
        return length;
    }

};

int main(){
    std::vector<int> nums = {1,1,1,2,3,3,3,3};
    Solution solution;
    std::cout<<solution.removeElement(nums,3);
}

