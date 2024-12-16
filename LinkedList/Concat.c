#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *first=NULL;
struct Node *second=NULL;
struct Node *third=NULL;

void create1(int A[],int n)
{
    struct Node *t,*last;
    int i;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->next=NULL;
    first->data=A[0];
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
void create2(int A[],int n)
{
    struct Node *t,*last;
    int i;
    second=(struct Node*)malloc(sizeof(struct Node));
    second->next=NULL;
    second->data=A[0];
    last=second;
    for(i=1;i<n;i++)
    {
      t=(struct Node*)malloc(sizeof(struct Node));
      t->data=A[i];
      t->next=NULL;
      last->next=t;
      last=t;
    }
}
void Concat(struct Node *p,struct Node *q)
{
    third=p;
    while(p->next != NULL)
    p=p->next;
    
    p->next=q;
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
    int A[]={1,4,8,9};
    int n=4;
    create1(A,n);
    
    int B[]={2,3,7,10};
    int m=4;
    create2(B,m);
    
    Concat(first,second);
    display(third);
    return 0;
}
