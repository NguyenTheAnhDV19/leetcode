#include<iostream>
#include<map>
#include<string>
#include<vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& vect) {
        std::string firstElement = vect[0];
        std::string result;
        for(int i=0;i<vect.size();i++){
            std::string currentElement = vect[i];
            for(int j =0;j<firstElement.size();j++){
                if(j == currentElement.size()-1){
                    break;
                }else if(firstElement.at(j) == currentElement.at(j)){
                        result.push_back(firstElement.at(j));
                }
            }
            firstElement = result;
            result.clear();
        }
    result = firstElement;
    return result;
    }


};

int main(){
    std::vector<std::string> vect = {"flower","flow","flight"};
    Solution solution;
    std::cout<<solution.longestCommonPrefix(vect);
    return 0;

}
