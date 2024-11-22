/*
enter the element in the array at last poisition

*/

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
        printf("%d",A.data[i]);
    }
}
void append(struct Arr *A,int x)  
{
     A->data[A->len]=x;
     A->len++;
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
    append(&A,6);
    
    display(A);
    return 0;
}
