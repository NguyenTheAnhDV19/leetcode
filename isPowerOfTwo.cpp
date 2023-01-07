class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n>1)
        {
            if(n%2 !=0)
            {
                return false;
            }
        n/=2;
        }
        return true;
    }

};

int main(){
    Solution* solution = new Solution;
    std::cout<<solution->isPowerOfTwo(5)<<std::endl;
    return 0;
}
