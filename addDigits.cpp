class Solution {
public:
    int addDigits(int num) {
        while(num >=10){
            num = num/10+num%10;
        }
        return num;
    }
};

int main(){
    Solution* solution = new Solution();
    std::cout<<solution->addDigits(38)<<std::endl;

    return 0;
}
