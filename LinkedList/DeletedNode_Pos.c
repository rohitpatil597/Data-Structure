#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* first=NULL;
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
      t->next=NULL;
      t->data=A[i];
      last->next=t;
      last=t;
    }
}
int count(struct Node* p)
{
    int count=0;
    while(p !=NULL)
    {
        count++;
        p=p->next;
    }
     return count; 
}
int delete_node(struct Node*p,int pos)
{
    struct Node *q;
    int i,x;
    if(pos > count(p) && pos < 1)
    {
    return -1;
    }
    else
    {
     if(pos==1)
     {
         q=first;
         first=first->next;
         x=first->data;
         free(first);
         return x;
     }
     else
     {
         for(i=0;i<pos-1;i++)
         {
             q=p;
             p=p->next;
         }
         q->next=p->next;
         x=p->data;
         free(p);
         return x;
     }
    }
    
}
void Display(struct Node *p)
{
    while(p !=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    int A[]={1,2,6,9,12};
    int n=5;
    create(A,n);
    printf("%d\ndeleted element ",delete_node(first,3));
    Display(first);
}
