class Solution {
private:
    int result(int num);

public:
    bool isHappy(int num)
    {
        while(result(num) != 1)
        {
            num = result(num);
        }
        return true;
    }
};

int Solution::result(int num)
{
    if(num >0)  {return std::pow(num%10,2) + result(num/10);}
    else{return 0;}
}

int main()
{
    Solution* solution = new Solution;
    std::cout<<solution->isHappy(19);
    delete(solution);
    return 0;
}
