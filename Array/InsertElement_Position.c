/*
enter the element in the array at last poisition

*/

#include <stdlib.h>
#include <stdio.h>

struct arr{
    int *data;
    int size;
    int len;
};


void display(struct arr A)
{
    printf("print the data\n");
    for(int i=0;i<=A.len;i++)
    {
        printf("%d ",A.data[i]);
    }
}
void Insert(struct arr A,int x,int pos)
{
if(pos>=0 && pos < A.len)
{
  for(int i=A.len;i>pos;i--)
  
   A.data[i]=A.data[i-1];
   A.data[pos]=x;
   A.len++;
}
else
{
    printf("Invalid poisition\n");
}
}
int main()
{
   struct arr A;
   int i,x;
   printf("enter the size in Array \n");
   scanf("%d",&A.size);
   
   A.data= (int *)malloc(A.size * sizeof(int));
   
   printf("enter the len of Array \n");
   scanf("%d",&A.len);
   
   printf("enter the element in Array \n");
   for(i=0;i<A.len;i++)
   {
   scanf("%d",&A.data[i]);
   }

   Insert(A,6,9);
   display(A);

   return 0; 
}
