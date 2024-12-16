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
void Remove_Duplicate(struct Node *p)
{
    struct Node *q=first;
    p=first->next;
    
    while(p !=NULL)
    {
        if(p->data != q->data)
        {
            q=p;
            p=p->next;
        }
        else
        {
            q->next=p->next;
            free(p);
            p=q->next;
            
        }
    }
}
int main()
{
    int A[]={1,1,1,1,1,4,4,4,8,8,8,9,9,9,9,9};
    int n=16;
    create(A,n);
    Remove_Duplicate(first);
    display(first);  
    return 0;
}
