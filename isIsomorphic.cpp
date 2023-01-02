class Solution {
public:
    bool isIsomorphic(std::string s, std::string t)
    {
        int sSize = s.size(); int tSize = t.size();
        std::vector<int> vs(sSize,0);
        std::vector<int> vt(tSize,0);

        if(sSize != tSize)
        {
            return false;
        }

        for(int i=0; i<sSize-1;i++)
        {
            for(int j =i+1; j<sSize;j++)
            {
                if(s[i] == s[j]) vs[i]++;
                if(t[i] == t[j]) vt[i]++;
            }
        }
        for(int i=0; i<sSize;i++)
        {
            if(vs[i] != vt[i]) return false;
        }
        return true;
    }
};
int main()
{
    std::string s= "foo"; std::string t ="baa";

    Solution* solution = new Solution;
    std::cout<<solution->isIsomorphic(s,t)<<std::endl;

    return 0;
}
