class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        for(int i=0;i<nums.size()-1;++i){
            for(int j=i+1;j<nums.size();++j){
                if(nums[i] == nums[j])
                {
                    if(std::abs(i-j)<=k) return true;
                }
            }
        }
        return false;
    }
};

int main(){
    std::vector<int> nums = {1,2,3,1,2,3}; int k=2;
    Solution* solution = new Solution;
    std::cout<<solution->containsNearbyDuplicate(nums,k)<<std::endl;
    return 0;
}
