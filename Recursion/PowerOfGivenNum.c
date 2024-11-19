#include<stdio.h>
#include<stdlib.h>

/*
Description:
calculate power of given number
power(m,n)=m^n;
power(m,n)= power(m,n-1)*m;
*/

int power(int m,int n)
{
    if(n==0)
    return 1;
    else
    return power(m,n-1)*m;
}
int main()
{
    printf("%d",power(3,9));
    return 0;
}
