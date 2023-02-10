class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        for(int i=0;i<t.size();i++)
        {
            if(s.find(t[i]) == std::string::npos) return t[i];
        }
    }
};

int main(){
    Solution* solution = new Solution;
    std::cout<<solution->findTheDifference("abcd","abcde");
    return 0;
}
