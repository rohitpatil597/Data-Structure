#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if(n<=1)
    return n;
    else
    return fact(n-1)*n;
}
int ncr(int n, int r)
{
    int t0,t1,t2;
    
    if(r==0 || n==r)
    return 1;
    else
    
    t0=fact(n);
    t1=fact(r);
    t2=fact(n-r);
    
    return (t0/t1 *(t2));
}
int main()
{
    printf("%d",ncr(5,4));
}
