#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum,x;
    int array[]={6,7,8,9,10,11,12,14};
    n=sizeof(array)/sizeof(array[0]);
    int l=array[0];
    int diff= l-0;
     for(int i=0;i<n;i++)
     if((array[i]-i) != diff)
     {
     printf("%d",(i)+diff);
     break; 
     }
    return 0;
}
