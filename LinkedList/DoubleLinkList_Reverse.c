#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node *next;
    struct Node *prev;
    int data;
};

struct Node *first=NULL;

void create(int A[],int n)
{
    struct Node *t,*last;
    int i;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    first->prev=NULL;
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
void Reverse(struct Node *p)
{
    struct Node *temp;
    while(p !=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p !=NULL && p->next == NULL)
        {
        first=p;
        }
    }
}
void display(struct Node *p)
{
    while(p !=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int main()
{
    int A[]={1,2,3,4,5};
    int n=5;
    create(A,n);
    Reverse(first);
    display(first);
    return 0;
}
