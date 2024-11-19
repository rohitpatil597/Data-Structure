/*
calculate Fibonacii number for given serial number
Fibonacii: 0 1 1 2 3 5 8 13....(n-2),(n-1),n
Sr No:     0 1 2 3 4 5 6 7.....n
*/

#include <stdio.h>
#include <stdlib.h>

int Fibonacii(int n)
{
    int t0=0,t1=1,s,i;
    if(n<=1)
    return n;
    else
    for(i=2;i<=n;i++)
    {
    s=t0+t1;
    t0=t1;
    t1=s;
    }
    return s;
}

int main()
{
    int n,i;
    printf("enter the valid num for to print Fibonacii Series\n");
    scanf("%d",&n);
    printf("Below is the Fibonacii series \n"); 
    for(i=0;i<n;i++)
    printf("%d ",Fibonacii(i));
    return 0;
}
