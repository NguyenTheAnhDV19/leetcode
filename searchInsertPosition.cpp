#include<iostream>
#include<map>
#include<string>
#include<vector>
#include <bits/stdc++.h>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        for(int i=0;i<nums.size();++i){
            if(target <= nums[i]){
                return i;
                break;
            }
        }
    }
};

int main(){
    std::vector<int> nums = {0,1,5,8};
    int target = 4;
    Solution solution;
    std::cout<<solution.searchInsert(nums,target);
}

