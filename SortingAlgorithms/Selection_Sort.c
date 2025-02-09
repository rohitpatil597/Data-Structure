#include <stdio.h>
#include <stdlib.h>

struct Selection{
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
void selection_sort(int A[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)  //i,J,k all are pointing on same element
        {
            if(A[j] < A[k]) //Compare the value with k
            k=j;            //move k with j
        }
        swap(&A[i],&A[k]);  //then swap the element if its smaller than A[i]
    }
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
}
int main()
{
    int i=0;
    struct Selection s={{8,3,1,2,5,9,7,4},8,8};
    selection_sort(s.A,s.size);
  
    return 0;
    
}
