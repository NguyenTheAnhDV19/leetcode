
int arrangeCoins(int n);

int main()
{
    int n =5;
    printf("%d",arrangeCoins(n));
    return 0;
}

int arrangeCoins(int n){
    int subtract =1; int result =0;
    while(n >0)
    {
        if((n -= subtract) >0){
            result++;
            subtract++;
        }
    }
    return result;
}

//Runtime complexity : O(logn)
//Space complexity : O(1)
