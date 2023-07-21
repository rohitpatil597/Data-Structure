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
void display(struct Node *p)
{
    if(p != NULL)      //p is the first element
    {
        
        printf("%d",p->data); //It will scan the entire linked list and print the data
      
        display(p->next);  //Using Recursive function
    }
}
int count(struct Node *p)
{
    int c=0;
    while(p != NULL)
    {
        c++;
        p=p->next;
    }
   
}
void add(struct Node *p)
{
    int sum=0;
    while(p != NULL)
    {
        sum=sum+(p->data);
         p=p->next;
    }
    printf("\n%d",sum);
}
int main()
{
    int a[]={2,3,4,5,6,7};
    create(a,6);
    display(first);
    printf("\ncount of nodes=%d", count(first));
    add(first);
    return 0;
}
