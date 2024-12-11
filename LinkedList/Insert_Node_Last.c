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
        t->next=NULL;
        t->data=A[i];
        last->next=t;
        last=t;
    }
}
void Insert( struct Node* p,int index,int Key)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    int i;
    t->data=Key;
    if(index==0)
    {
    t->next=first;
    first=t;
    }
    else
    {
        for(i=0;i<index-1;i++)
        {
        p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
void Insert_last(int x)
{
    struct Node *t,*last;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    last->next=t;
    t=last;
    
}
void Display(struct Node* p)
{
    while(p !=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int main()
{

    Insert(first,0,1);
    Insert(first,1,2);
    Insert(first,2,3);
     Insert_last(6);
   
    Display(first);
    return 0;
}
