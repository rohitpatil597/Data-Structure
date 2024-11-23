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
int Binary_search(struct array arr,int key)
{
    int l=0;
    int mid;
    int h=arr.len-1;
    while(l <= h)
    {
        mid=(l+h)/2;
        
        if(key==arr.data[mid])
        return mid;
        else if(key > arr.data[mid])
           l=mid+1;
        else
           h=mid-1;
    }
    return 0;
}
int main()
{
    struct array arr={{2,3,4,9,6,13,23,75,82,94},11,11};
    display(arr);
    int x=Binary_search(arr,82);
    if(x)
    {
        printf("\nfound at %d position",x);
    }
    else
    {
       printf("Not found\n"); 
    }
    return 0;
}
