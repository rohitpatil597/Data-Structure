#include <stdio.h>
#include <stdlib.h>

int A[]={3,2,1,0,5,7,9,38};

int main()
{
    int i,j;
    int max=A[0];
    int min=A[0];
    int n=sizeof(A)/sizeof(A[0]);
    for(i=0;i<=n-1;i++)
    {
     if(A[i] < min)
     min=A[i];
     else if (A[i] > max)
     max=A[i];
    }
    printf("max %d min %d",max,min);
    return 0;
}
