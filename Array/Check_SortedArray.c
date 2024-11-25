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

int check_array_sorted(struct array arr)
{
    int i;
    for(i=0;i<arr.len-1;i++)
    {
        if(arr.data[i+1]< arr.data[i])
        return -1;
    }
    return 1;
}
int main()
{
    struct array arr={{0,2,4,6,8,10,12},7,7};
    printf("%d\n",check_array_sorted(arr));
    display(arr);
    return 0;
}
