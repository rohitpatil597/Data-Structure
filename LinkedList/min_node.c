#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};
struct Node *first;           
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));  //Creating first node
    first->data=A[0];                                  // Stored the data from array
    first->next=NULL;                                  // not creating next node yet to assign to NULL
    last=first;                                        // So last will coonect to first
    for(i=1;i<n;i++)
    {
        
        t=(struct Node *)malloc(sizeof(struct Node));      //Created temporary node
        t->data=A[i];                                   //Addign aaray data into node using for loop
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int MIN(struct Node *p)
{
    int min;
    while(p != NULL)
    {
        if(p->data < min)
        
         min=p->data;
         p=p->next;
        
    }
     return min;
}
int main()
{
    int a[]={172,78,12,5,6,7};
    create(a,6);
    printf("\nmax of nodes=%d", MIN(first));
    return 0;
}
