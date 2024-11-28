#include <stdio.h>
#include <stdlib.h>

int arr[14]={2,3,3,4,5,6,6,6,7,8,8,9,9};
int H[10];
int main()
{
    int i,j;
    int n= sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n;i++)
    {
            H[arr[i]]++;
    }
    for(j=0;j<=9;j++)
    {
        if(H[j] > 1)
        printf("Repeted=%d and Num=%d\n",H[j],j);
    }
    return 0;
}
