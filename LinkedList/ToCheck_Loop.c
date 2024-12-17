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

int loop(struct Node *f)
{
    struct Node*p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(p && q && p !=q);
    if(p==q)
    return 1;
    else
    return 0;
}
int main()
{
    int A[]={1,2,3,4,5};
    struct Node *t1,*t2;
    
    int n=5;
    create(A,n);
    
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    

    printf("Loop = %d",loop(first));
    return 0;
}
