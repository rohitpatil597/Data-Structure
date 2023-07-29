#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* next;
    int data;
};
struct node* first;

void create(int A[],int n)
{
    int i;
    struct node* t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
          t=(struct node*)malloc(sizeof(struct node));
          t->data=A[i];
          t->next=NULL;
          last->next=t;
          last=t;
    }
}
void Insert(int x)
{
    struct node* t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data= x;
    t->next=first;
    first=t;
}
void Insert_n_pos(struct node* p,int x,int pos)
{
    struct node* t;
    int i;
    t=(struct node*)malloc(sizeof(struct node));
    t->data= x;
    for(i=0;i<pos-1;i++)
    
        p=p->next;
        t->next=p->next;
        p->next=t;
    
}
void display(struct node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
int main()
{

 int A[]={10,20,30,40,50};
 create(A,5);
 Insert_n_pos(first,4,3);
 display(first);
 return 0;
}
