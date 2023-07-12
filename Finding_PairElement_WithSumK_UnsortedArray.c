#include <stdio.h>
#include <stdlib.h>
struct array{
    int A[10];
    int size;
    int length;
};

void duplicate(struct array a,int k)
{
    int i,j;
   
    for(i=0;i<a.length-1;i++)
    {
         
        for(j=i+1;j<a.length-1;j++)
        {
            if(a.A[i]+a.A[j]==k)
            {
             printf("Pair of Array Element %d + %d = %d\n",a.A[i],a.A[j],k);
            }
   
        }
    }

}
int main()
{
    struct array a={{1,7,4,2,5,5,6,3},10,10};
    int k=10;
    duplicate(a,k);
    return 0;
}
