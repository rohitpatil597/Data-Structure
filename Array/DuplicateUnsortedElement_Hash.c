#include <stdio.h>
#include <stdlib.h>

int arr[]={1,2,3,4,5,3,2,8,8,8};
int H[];
int main()
{
    int i,j;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    {
        H[arr[i]]++;
    }
    for(j=0;j<n;j++)
    {
        if(H[j]>1)
        {
            printf("Duplicate Num=%d, num of time=%d\n",j,H[j]);
        }
    }
    return 0;
}
