int countSegments(char * s);

int main()
{
    char s[] = "Hello, my name is John";
    printf("%d",countSegments(s));
    return 0;
}

int countSegments(char * s){
    int result =1;
    for(int i=0;s[i] != '\0';i++)
    {
        if(s[i] == ' ') result++;
    }
    return result;
}
