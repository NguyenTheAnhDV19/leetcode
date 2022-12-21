class Solution {
public:
    static void Merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
       int indexTotal = m+n-1; int index1 = m-1 ; int index2 = n-1;
       while(index1 >=0 && index2 >=0){
            nums1[index1] > nums2[index2] ? nums1[indexTotal--] = nums1[index1--] : nums1[indexTotal--] = nums2[index2--];
       }
       while(index2 >=0) nums1[indexTotal--] = nums2[index2--];
    }
};

int main(){
    std::vector<int> nums1 = {1,2,3,3,4,0,0,0,0,0,0}, nums2 = {1,1,3,5,7};
    Solution::Merge(nums1,3,nums2,4);
    for(int i=0;i<nums1.size();++i){
        std::cout<<nums1[i];
    }
}
