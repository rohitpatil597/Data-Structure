#include <stdlib.h>
#include <stdio.h>

struct Insert{
    int A[10];
    int size;
    int len;
};

void Insert_Sort(int A[],int n)
{
    int i,j,x;
    for(i=1;i<n;i++) //Consider as 1st element already Inserted
    {
        x=A[i];
        j=i-1;       //j will pointed as i-1
        while(j > -1 && A[j] > x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
}
int main()
{
    struct Insert I={{1,4,9,5,7,2,8,3},8,8};
    Insert_Sort(I.A,I.size);
    return 0;
}
