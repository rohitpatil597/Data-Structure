#include <stdio.h>
#include <stdlib.h>
struct array{
    int A[10];
    int size;
    int length;
};

void max_min(struct array a)
{
    int i,j;
   int max,min;
   max=a.A[0];
   min=a.A[0];
    for(i=1;i<a.length-1;i++)
    {
         if(a.A[i] < min)
         {
            min=a.A[0]; 
         }
         else if (a.A[i] > max)
         {
             max=a.A[i]; 
         }

    }
    printf("Max=%d and Min=%d",max,min);

}
int main()
{
    struct array a={{1,7,4,2,-1,5,6,33},10,10};
    max_min(a);
    return 0;
}
