class Solution {
public:
    int findComplement(int num) {
        int count =0; int result=0;
        while(num != 0){
            if(!(num%2)){
                result += pow(2,count);
            }
            num/=2;
            count++;
            cout<<result;
       }
        return result;
    }
};
