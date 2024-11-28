#include <stdio.h>
#include <stdlib.h>

int arr[]={3,2,1,4,5,7,9,8};

int main()
{
    int i,j;
    int k=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<=n-1;i++)
    {
     for(j=i+1;j<=n;j++)
     {
         {
         if(arr[i]+arr[j]==k)
         printf("%d %d\n",arr[i],arr[j]);
         }
     }
    }
    return 0;
}
