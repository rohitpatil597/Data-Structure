#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first=NULL;

void display(struct Node *p)
{
    while(p !=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void push(int x)
{
    struct Node *t;
    
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL)
    printf("Its Overflow\n");
    else
    t->next=first;
    t->data=x;
    first=t;
}
int Pop()
{
  int x=-1;
  struct Node *t=NULL;
 if(first==NULL)
 {
 printf("Its underflow");
 return x;
 }
 else
 {
 t=first;
 x=first->data;
 first=first->next;
 free(t);
 return x;
 }
}
int check_status(struct Node *p)
{
    p=(struct Node *)malloc(sizeof(struct Node));
    
    if(p==NULL)
    {
    return 0;  //If node is not created because of heap memory is full
    }
    else
    {
    return 1;  //If node is created
    }
}
void Check_topmost()
{
    int x;
    if(first==NULL)
    printf("Node is not present");
    else
    x=first->data;
    printf("%d\n",x);
}
int peek(struct Node *p,int index)
{
    int i,x=-1;
    p=first;
    for(i=0;i<index -1;i++)
    p=p->next;
    x=p->data;
    return x;
}
int main()
{
   push(9);
   push(2);
   push(3);
   push(4);
    printf("%d\n",peek(first,4));
    display(first);
    return 0;
}
