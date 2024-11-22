#include <stdio.h>
#include <stdlib.h>

struct Arr{
    int *data;
    int size;
    int len;
};

void display(struct Arr A)
{
    int i;
    for(i=0;i<A.len;i++)
    {
        printf("%d ",A.data[i]);
    }
}
void delete(struct Arr *A,int pos)
{
    int i;
    for(i=pos;i<A->len-1;i++)
    A->data[pos]=A->data[i+1];
    A->len--;
}
int main()
{
    struct Arr A;
    int i;
    printf("Enter the size array\n");
    scanf("%d",&A.size);
    
    A.data=(int *)malloc(A.size *sizeof(int));
    
    printf("Enter the len array\n");
    scanf("%d",&A.len);
    
    printf("Enter the element\n");
    for(i=0;i<A.len;i++)
    {
    scanf("%d",&A.data[i]);
    }

    delete(&A,3);
    display(A);
    return 0;
}

