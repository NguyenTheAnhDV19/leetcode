class Solution {
public:
    static bool isPalindrome(std::string s) {
        std::string reverseS;
        for(int i=0;i<s.size();++i){
            reverseS[s.size()-1-i] = s[i];
        }
        for(int i=0;i<s.size();++i){
            if(s[i] != reverseS[i]){
                return false;
                break;
            }
        }
        return true;
    }
};

int main(){
    std::string s ="abaa";
    std::cout<<Solution::isPalindrome(s);
    return 0;
}
