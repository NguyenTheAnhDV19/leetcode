class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int temp[s.size()];
        for(int i=0;i<s.size();i++) temp[i] =-1;

        for(int i=0;i<s.size();i++){
            for(int j=0;j<t.size();j++){
                if(s[i] == t[j]){
                    temp[i] = j;
                    break;
                }
            }
        }
        for(int i=0;i<s.size()-1;i++){
            if(temp[i] > temp[i+1]) return false;
        }
        return true;
    }
};

int main(){
    Solution* solution = new Solution;
    std::cout<<solution->isSubsequence("axc","ahbgdc");
    return 0;
}
