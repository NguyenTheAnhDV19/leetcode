#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>
#include "Node.h"
#include<unistd.h>
#include<cmath>
#include <cstdlib>
#include <bitset>
#include<bits/stdc++.h>

int convert_toInt(char* s);
int solve(char* num1, char* num2);

int main()
{
    char num1[] = "123";
    char num2[] = "11";
    printf("%d",solve(num1,num2));
    return 0;
}

int convert_toInt(char* s)
{
    int result =0;
    for(int i=0; s[i]!= '\0';i++)
    {
        result = result*10 + ((int)s[i] -48 );
    }
    return result;
}

int solve(char* num1, char* num2)
{
    int num1Int = convert_toInt(num1);
    int num2Int = convert_toInt(num2);

    return num1Int+ num2Int;
}
