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
void delete(struct Node *p,int pos)
{
    int i,x;
    p=first;
    if(pos==0)
    {
        x=first->data;
        first=first->next;
        first->prev=NULL;
        free(p);
    }
    else
    {
    for(i=0;i<pos-1;i++)
    p=p->next;
    x=p->data;
    p->next->prev=p->prev;
    p->prev->next=p->next;
    free(p);
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
    delete(first,0);
    display(first);
    return 0;
}
