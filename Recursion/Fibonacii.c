/*
calculate Fibonacii number for given serial number
Fibonacii: 0 1 1 2 3 5 8 13....(n-2),(n-1),n
Sr No:     0 1 2 3 4 5 6 7.....n
*/

#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if(n<=1)
    return n;
    else
    return fib(n-2)+fib(n-1);
}
int main()
{
    printf("%d",fib(6));
    return 0;
}
