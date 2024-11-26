#include<stdio.h>
#include<stdlib.h>

struct array{
    int data[10];
    int size;
    int len;
};

void display(struct array arr)
{
    int i;
    for(i=0;i<=arr.len-1;i++)
    {
        printf("%d ",arr.data[i]);
    }
}
struct arr* merge_array(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    
    while(i < arr1->len && j < arr2->len)
    {
        if(arr1->data[i] < arr1->data[j])
           arr3->data[k++]=arr1->data[i++];
        else
           arr3->data[k++]=arr2->data[j++];
    }
    for(;i<arr1->len;i++)
    arr3->data[k++]=arr1->data[i];
    
    for(;j<arr2->len;j++)
    arr3->data[k++]=arr2->data[j];
    
    arr3->len=arr1->len+arr2->len;
    arr3->size=10;
    return arr3;
}
int main()
{
    struct array arr1={{2,4,6,8},4,4};
    struct array arr2={{1,3,5,7},4,4};
    struct array *arr3;
    arr3=merge_array(&arr1,&arr2);
    display(*arr3);
    return 0;
}
