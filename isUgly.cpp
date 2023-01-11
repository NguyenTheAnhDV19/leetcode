class Solution {
public:
    bool isUgly(int n) {
        if(n == 1){
            return true;
        }else if(n<=0){
            return false;
        }else{
        while(n>1){
            if(n%5==0){
                n/=5;
            }else if(n%3 == 0){
                n/=3;
            }else if(n%2 ==0){
                n/=2;
            }else{
                return false;
            }
        }
        return true;
        }
    }
};

int main(){
    Solution* solution = new Solution();
    std::cout<<solution->isUgly(6)<<std::endl;

    return 0;
}
