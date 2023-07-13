#include <stdio.h>
#include <stdlib.h>
struct array{
    int A[10];
    int size;
    int length;
};

void duplicate(struct array a)
{
    int i,j;
   
    for(i=0;i<a.length-1;i++)
    {
         int count=1;
         if(a.A[i] !=-1)
         {
        for(j=i+1;j<a.length-1;j++)
        {
            if(a.A[i]==a.A[j])
            {
                count++;
                a.A[j]=-1;
            }
   
        }
     if(count > 1)
    printf("Repeated Element=%d and Repeated for %d\n",a.A[i],count);
         }

    }

}
int main()
{
    struct array a={{1,2,3,2,4,5,6,6},10,10};
    duplicate(a);
    return 0;
}
