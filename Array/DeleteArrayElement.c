#include <stdio.h>
#include <stdlib.h>

struct arr{
    int *data;
    int size;
    int len;
};

void delete(struct arr A,int pos)
{
    int x,i;
    for(i=pos;i<A.len-1;i++)
    {
    A.data[i]=A.data[i+1];
    }
    A.len--;
}
void display(struct arr A)
{
    int i;
    for(i=0;i<A.len-1;i++)
    printf("%d",A.data[i]);
}
int main()
{
    struct arr A;
    int x,i;
    
    printf("Enter the size\n");
    scanf("%d",&A.size);
    
    A.data=(int *)malloc(A.size *sizeof(int));
    
    printf("Enter the Lenght\n");
    scanf("%d",&A.len);
    
    printf("Enter the Element:");
    
    for(i=0;i<A.len;i++)
    {
    scanf("%d",&A.data[i]);
    }
    printf("Total Element is: ");
    for(i=0;i<A.len;i++)
    {
    printf("%d",A.data[i]);  
    }
    printf("\nAfter Deleting total element:");

    delete(A,4);
    display(A);
    return 0;
}
