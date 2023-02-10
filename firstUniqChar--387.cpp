class Solution {
public:
    int firstUniqChar(std::string s) {
        int temp[s.size()];
        for(int i=0; i<sizeof(temp)/4;i++) temp[i] =0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(i != j){
                if(s[i] == s[j]){
                    temp[i] =1;
                }
                }
            }
        }
        for(int i=0;i<sizeof(temp)/4;i++){
            if(!temp[i]){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    Solution* solution = new Solution;
    std::cout<<solution->firstUniqChar("aabb");
    return 0;
}
