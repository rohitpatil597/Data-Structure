#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* next;
    int data;
};
struct node* first=NULL;


void create(int A[],int n)
{
    int i;
    struct node* t,*last;
    first=(struct node *) malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t =(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
struct node* LSearch(struct node* p,int key)
{
    struct node* q=NULL;
    
    while(p!=NULL)
    {
     if(key == p->data)
       {
         q->next=p->next;
         p->next=first;
         first=p;
         return p;
       }
    q=p;
    p=p->next;
    }
    return NULL;
}
void Display(struct node *p)
{
    while(p!=NULL)
    {
       printf("%d ",p->data);
       p=p->next;
    }
}

int main()
{
    struct node* p;
    int A[7]={2,4,5,7,8,9,14};
    create(A,7);
    p=LSearch(first,14);
   
   if(p)
   printf("Key is Found=%d\n",p->data);
   else
   printf("Key Not Found\n");
   Display(first);
   return 0;
}
