#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* next;
    int data;
};
struct node *first;
void create(int A[],int n)
{
    int i;
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node ));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node ));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void Insert(int x)
{
    struct node* p1;
    p1=(struct node*)malloc(sizeof(struct node));
    p1->data=x;
    p1->next=first;
    first=p1;
}
void Display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}

int main()
{
    int a[5]={2,4,5,6,7};
    create(a,5);
    Insert(10);
    Display(first);
    return 0;
}
