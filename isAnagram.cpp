#include<iostream>
#include<map>
#include<string>
#include<algorithm>


class Solution
{
public:
    static bool isAnagram(std::string s1, std::string s2)
    {
        if(s1.size() != s2.size())
        {
            return false;
        }

        for(char cha1: s1)
        {
            if(s2.find(cha1) == std::string::npos)
            {
                return false;
            }
        }

        std::map<char,int> map1;
        std::map<char,int> map2;
        for(char character : s1)
        {
            map1.insert({character,0});
            for(auto it = map1.begin(); it != map1.end();it++)
            {
                if(character == it->first)
                {
                    it->second++;
                }else{
                    it->second = it->second;
                }
            }
        }
        for(char character : s2)
        {
            map2.insert({character,0});
            for(auto it = map2.begin(); it != map2.end();it++)
            {
                if(character == it->first)
                {
                    it->second++;
                }else{
                    it->second = it->second;
                }
            }
        }
        for(auto it1 = map1.begin(); it1 != map1.end(); it1++)
        {
            for(auto it2 = map2.begin(); it2 != map2.end(); it2++)
            {
                if(it1->first == it2->first)
                {
                    if(it1->second != it2->second)
                    {
                        return false;
                    }
                }
            }
        }
        return true;

    }
};

int main()
{
    std::string s1=  "map";
    std::string s2 = "pam";

    std::cout<<Solution::isAnagram(s1,s2);
    return 0;
}
