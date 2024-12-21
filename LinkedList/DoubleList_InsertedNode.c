#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *first=NULL;

void create(int A[],int n)
{
    struct Node *t,*last;
    int i;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->next=NULL;
    first->prev=NULL;
    first->data=A[0];
    first->next=last;
    last=first;
    for(i=1;i<n;i++)
    {
       t=(struct Node*)malloc(sizeof(struct Node));
       t->data=A[i];
       t->next=last->next;
       t->prev=last;
       last->next=t;
       last=t;
    }
}
int len(struct Node *p)
{
    int len;
    while(p !=NULL)
    {
        len++;
        p=p->next;
    }
    return len;
}
void Insert_Node(struct Node*p,int x,int pos)
{
    struct Node *t;
    int i;
    if(pos==0)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else
    {
    for(i=0;i<pos-1;i++)
        p=p->next;
        t=(struct Node*)malloc(sizeof(struct Node)); 
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next)
        p->next->prev=t;
        p->next=t;
    }
}
void display(struct Node* p)
{
    while(p !=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    int A[]={1,2,3,4,5,6};
    int n=6;
    create(A,n);
    Insert_Node(first,7,4);
    display(first);
    return 0;
}
