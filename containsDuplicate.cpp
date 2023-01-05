class Solution
{
public:
    bool containsDuplicate(std::vector<int>& nums)
    {
        for(int i=0;i<nums.size()-1;++i){
            for(int j=i+1;j<nums.size();++j){
                if(nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};

int main(){
    std::vector<int> nums = {1,2,2,3};
    Solution* solution = new Solution;
    std::cout<<solution->containsDuplicate(nums)<<std::endl;
    return 0;
}
