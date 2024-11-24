#include <stdio.h>
#include <stdlib.h>

struct array{
    int data[10];
    int size;
    int len;
};

void display(struct array arr)
{
    int i;
    for(i=0;i<arr.len;i++)
    {
        printf("%d",arr.data[i]);
    }
}
void Reverse_array(struct array *arr)
{
    int i,j;
    int *B;
    B=(int *)malloc(arr->len * sizeof(int));
    for(i=arr->len-1,j=0;i>=0;i--,j++)
        B[j]=arr->data[i];
    for(i=0;i<arr->len;i++)
    arr->data[i]=B[i];
}
int main()
{
    struct array arr={{1,2,3,4,5,6,7,8},10,8};
    Reverse_array(&arr);
    display(arr);
}
