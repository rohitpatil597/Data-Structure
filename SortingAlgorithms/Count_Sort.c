#include <stdio.h>
#include <stdlib.h>

struct Count{
    int A[20];
    int size;
};

int find(int A[],int n)
{
    int i;
    int max=-65536;
    for(i=0;i<n;i++)
    {
        if(A[i] > max)
        {
            max=A[i];
        }
    }
    return max;
}
void count_sort(int A[],int n)
{
    int i,j,*c;
    int max=find(A,n);
    c=(int *)malloc((max+1) * sizeof(int));
    for(i=0;i<max+1;i++)
    {
        c[i]=0;
    }
    for(i=0;i<n;i++)
    {
        c[A[i]]++;
    }
    i=0;j=0;
    while(j<max+1)
    {
        if(c[j] > 0)
        {
            A[i++]=j;
            c[j]--;
        }
        else
        j++;
    }
  for(i=0;i<n;i++)
  printf("%d ",A[i]);
}
int main()
{
    struct Count c={{3,5,1,3,9,4,9,10},8};
    count_sort(c.A,c.size);
    return 0;
}
