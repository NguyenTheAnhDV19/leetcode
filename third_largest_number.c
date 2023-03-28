int result(int* arr);

int main()
{
    int arr[] = {1,3,5,7,7,7,9};
    printf("%d",result(arr));

    return 0;
}

int result(int* arr)
{
    for(int i=0; i<7-1;i++)
    {
        for(int j=i+1; j<7;j++)
        {
            if(arr[i]<arr[j]) {
                int num = arr[i];
                arr[i] = arr[j];
                arr[j] = num;
            }
        }
        printf("%d",arr[i]);
    }
    int result = arr[0]; int count =0;
    for(int i=1;i<7;i++)
    {
        if(count <2)
        {
            if(result != arr[i])
            {
                result = arr[i];
                count++;
            }
        }
        else{
           return result;
        }
    }
    return arr[0];
}
