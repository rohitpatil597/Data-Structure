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
void display(struct Node* p)
{
    while(p !=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
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
int main()
{
    int A[]={1,2,3,4,5,6};
    int n=6;
    create(A,n);
    display(first);
    printf("\nLen=%d",len(first));
    return 0;
}
