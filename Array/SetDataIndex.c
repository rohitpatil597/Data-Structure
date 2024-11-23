#include <stdlib.h>
#include <stdio.h>

struct array{
    int data[10];
    int size;
    int len;
};

void display(struct array arr)
{
 int i;
 for(i=0;i<arr.len-1;i++)
 {
     printf("%d ",arr.data[i]);
 }
}
int Set_Data(struct array *arr,int index,int Set_data)
{
    if(index >0 && index < arr->len)
    {
        return arr->data[index]=Set_data;
    }
}

int main()
{
    struct array arr={{2,3,4,9,6,13,23,75,82,94},11,11};
    
    printf("Data=%d\n",Set_Data(&arr,7,44));
    display(arr);
    return 0;
}
