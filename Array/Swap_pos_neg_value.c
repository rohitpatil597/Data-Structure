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
    for(i=0;i<= arr.len;i++)
    {
        printf("%d ",arr.data[i]);
    }
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void pos_neg(struct array *arr)
{
    int i,j;
    i=0;
    j=arr->len-1;
    while(i < j)
    {
    while(arr->data[i] < 0){i++;}
    while(arr->data[j] >= 0){ j--;}
    if(i <j)
    {
    swap(&arr->data[i],&arr->data[j]);
    }
    }
}
int main()
{
    struct array arr={{1,-2,4,-6,8,10,-12,14},8,8};
    pos_neg(&arr);
    display(arr);
    return 0;
}
