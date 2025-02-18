#include <stdio.h>
#include <stdlib.h>

struct Shell{
    int A[10];
    int size;
};

void shell_sort(int A[],int n)
{
    int i,j,gap;
    int temp;
    for(gap=n/2;gap>=1;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            temp=A[i];
            j=i-gap;
            while(j>=0 && A[j] > temp)
            {
             A[j+gap]=A[j];
             j=j-gap;
            }
             A[j+gap]=temp;
            
        }
  
    }
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
}

int main()
{
    int i;
    struct Shell s={{2,6,3,9,3,54,1,30},8};
    shell_sort(s.A,s.size);    

    return 0;
}
