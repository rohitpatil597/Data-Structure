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
for(i=0;i<=arr.len-1;i++)
{
    printf("%d ",arr.data[i]);
}
}

struct array * Union_array(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    while(i < arr1->len && j < arr2->len)
    {
        if(arr1->data[i]< arr2->data[j])
          arr3->data[k++]= arr1->data[i++];
         else if(arr1->data[i] > arr2->data[j])
        arr3->data[k++]=arr2->data[j++];
        else
        {
          arr3->data[k++] = arr1->data[i++];
          j++;
        }
    }
    for(;i<arr1->len;i++)
    arr3->data[k++]= arr1->data[i];
    for(;j<arr2->len;j++)
    arr3->data[k++]= arr2->data[j];
    
    arr3->len=k;
    arr3->size=10;
    return arr3; 
}

struct array * Intersection(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    while(i < arr1->len && j < arr2->len)
{
        if(arr1->data[i]< arr2->data[j])
          i++;
         else if(arr1->data[i] > arr2->data[j])
         j++;
         else if(arr1->data[i] == arr2->data[j])
         {
            arr3->data[k++]=arr1->data[i++];
            j++;
         }
}
    arr3->len=k;
    arr3->size=10;
    return arr3; 
}

struct array * difference(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    while(i < arr1->len && j < arr2->len)
{
         if(arr1->data[i] < arr2->data[j])
            arr3->data[k++]=arr1->data[i++];
         else if(arr1->data[i] > arr2->data[j])
            j++;
         else
         {
             i++;
             j++;
         }
}
 for(;i<arr1->len;i++)
 arr3->data[k++]=arr1->data[i];
 
    arr3->len=k;
    arr3->size=10;
    return arr3; 
}

int main()
{
    struct array arr1={{2,9,21,28,35},5,5};
    struct array arr2={{2,3,9,18,28},5,5};
    struct array *arr3;
    arr3=difference(&arr1,&arr2);
    display(*arr3);
    return 0;
}
