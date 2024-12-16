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
int check_sorted(struct Node *p)
{
    int x=-65536;
    while(p != NULL)
    {
        if(p->data < x)
        return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}
int main()
{
    int A[]={1,4,24,45,89};
    int n=5;
    create(A,5);
    display(first);

    if(check_sorted(first))
    {
    printf("\nIts Sorted");
    }
    else
    {
    printf("\nIts Not Sorted");
    }
    return 0;
}
