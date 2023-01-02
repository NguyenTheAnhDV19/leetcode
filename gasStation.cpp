#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>

class Solution {
private:
    bool checkCost(int position, int cost[], int gas[]);

public:
    int gasStation(int cost[],int gas[])
    {
        int position =0;
        for( position; position<3;position++)
        {
            if(checkCost(position,cost,gas) == true) return position+1;
        }
    return -1;
    }
};

bool Solution::checkCost(int position, int cost[], int gas[])
{
    int remain = 0; int j=-1; int rePos = position;
    for(int i=0 ;i<=sizeof(cost)/sizeof(int);i++)
    {
        if(rePos <sizeof(cost)/sizeof(int))
        {
            remain += (gas[rePos] - cost[rePos]);
        }else{
            remain += (gas[rePos-sizeof(cost)/sizeof(int)-1] - cost[rePos-sizeof(cost)/sizeof(int)-1]);
        }
        std::cout<<rePos<<std::endl;
        if(remain<=0) break;
        rePos++; j++;
    }
    std::cout<<"endl"<<std::endl;
    if(rePos - 3 == position) return true;
    return false;
}

int main()
{
    int cost[3] = {1,2,3};
    int gas[3] = {2,1,6};
    Solution solution;
    std::cout<<solution.gasStation(cost,gas)<<std::endl;
    return 0;
}
