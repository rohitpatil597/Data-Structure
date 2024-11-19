#include<stdio.h>
#include<stdlib.h>

/*
Description:
calculate factorial of nth number
1) 1,2,3,4..n.
2) 1,2,3,4..(n-1),n
fact(n)= fact(n-1)*n
*/

int fact(int n)
{
    if(n==0)
    return 1;
    else
    return fact(n-1)*n;
}
int main()
{
    printf("%d",fact(1));
    return 0;
}
