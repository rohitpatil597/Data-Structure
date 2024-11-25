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
void Insert_Element_Sorted_Array(struct array *arr,int x)
{
    int i=arr->len-1;
    while(arr->data[i] > x)
    {
      arr->data[i+1]=arr->data[i];  
      i--;
    }
    arr->data[i+1]=x;
}
int main()
{
    struct array arr={{0,2,4,6,8,10,12},7,7};
    Insert_Element_Sorted_Array(&arr,5);
    display(arr);
    return 0;
}
