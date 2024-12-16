#include <stdlib.h>
#include <stdio.h>

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
void display(struct Node* p)
{
    while(p !=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void Reverse1(struct Node* p)
{
    int *A;
    struct Node* q=p;
    A=(int *)malloc(20* sizeof(int));
    int i;
    while(q !=NULL)
    {
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q !=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
    }
}

int main()
{
    int A[]={1,4,8,9};
    int n=4;
    create(A,n);
    Reverse1(first);
    display(first);
    return 0;
}
