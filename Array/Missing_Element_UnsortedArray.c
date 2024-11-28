#include <stdio.h>
#include <stdlib.h>

 int A[]={2,7,9,6,10,3,9,8};
 int H[10]={0,0,0,0,0,0,0,0,0,0};
 
int main()
{
    int i;
    int j;
    for(i=0;i<10;i++)
    {
        H[A[i]]++;
    }
    for(j=0;j<10;j++)
    if(H[j] == 0)
    printf("%d ",j);
    return 0;
}
