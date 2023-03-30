int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize);
int check(int num, int* nums, int numSize);

int main()
{
    int nums[] = {4,3,2,7,8,2,3,1}; int returnSize =0;
    int* result = findDisappearedNumbers(nums,sizeof(nums)/4,&returnSize);
    for(int i=0;i<returnSize;i++)
    {
        printf("%d",result[i]);
    }
    return 0;
}

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
   int max_ =nums[0];int index =0; int* result =(int*) malloc(sizeof(int));
   //max number here
   for(int i=0; i<numsSize;i++) {
        if(max_< nums[i]) max_ = nums[i];
   }

    for(int i=1;i<=max_;i++)
    {
        if(!check(i,nums,numsSize)) {
            index++;
            result = (int*)realloc(result,index*4);
            *(result + (index-1)) = i;
        }

    }
    *returnSize = index;
    return result;
}

int check(int num, int* nums, int numSize)
{
    for(int i=0;i<numSize;i++)
    {
        if(num == nums[i]) return 1;
    }
    return 0;
}
