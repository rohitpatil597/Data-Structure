#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *first=NULL;
void create(int A[],int n)
{
    struct Node *t,*last;
    int i;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
{
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
}
}

void insert_sorted(struct Node*p,int x)
{
    struct Node *t,*q=NULL;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->next=NULL;
    t->data=x;
    if(first==NULL)
    {
    first=t;
    }
    else
    {
        while(p && p->data < x)
        {
            q=p;
            p=p->next;
        }
        t->next=q->next;
        q->next=t;
        
    }
}
void display(struct Node *p)
{
    while(p != NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
int main()
{
    int A[]={1,2,3,7,9};
    int n=5;
    create(A,n);
    insert_sorted(first,8);
    display(first);
    return 0;
}
