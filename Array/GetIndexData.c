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
int Get_Data(struct array arr,int index)
{
    if(index >0 && index < arr.len)
    {
        return arr.data[index];
    }
}
int main()
{
    struct array arr={{2,3,4,9,6,13,23,75,82,94},11,11};
    display(arr);
    printf("\nData=%d",Get_Data(arr,7));
    return 0;
}
