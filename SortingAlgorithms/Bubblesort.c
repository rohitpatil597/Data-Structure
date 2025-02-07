#include <stdlib.h>
#include <stdio.h>

struct Bubble{
    int A[10];
    int size;
    int len;
};

void swap(int *a,int *b)
{
     int c;
     c=*a;
    *a=*b;
    *b=c;
}
void bubble_sort(int A[],int k)
{
    int i,j;
    for(i=0;i<k-1;i++)
    {
    for(j=0;j<k-i-1;j++)
    {
        if(A[j+1]<A[j])
        {
          swap(&A[j+1],&A[j]);  
        }
    }
    }
    
    for(i=0;i<k;i++)
    {
    printf("%d",A[i]);
    }
}
int main()
{
    struct Bubble b={{5,7,2,8,3},5,5};
    bubble_sort(b.A,b.size);
    return 0;
}
