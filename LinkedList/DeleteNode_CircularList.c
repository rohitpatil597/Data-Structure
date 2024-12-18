#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* Head=NULL;

void create(int A[],int n)
{
    struct Node *f,*last;
    int i;
    Head=(struct Node*)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=Head;
    last=Head;
    for(i=1;i<n;i++)
    {
        f=(struct Node*)malloc(sizeof(struct Node));
        f->data=A[i];
        f->next=last->next;
        last->next=f;
        last=f;
    }
}

void Delete_circular_List(struct Node *p,int index)
{
    struct Node *q;
    int x,i;
    p=Head;
    if(index==1)
    {
      while(p->next !=Head)
      p=p->next;
      x=Head->data;
      p->next=Head->next;
      free(Head);
      Head=p->next;
    }
    else
    {
        
        for(i=0;i<index-2;i++)
        p=p->next;
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }
}
void display(struct Node* p)
{
    do{
       printf("%d",p->data);
       p=p->next;
    }while(p != Head);
}
int main()
{
    int A[]={1,2,3,4,5};
    int n=5;
    create(A,n);
    Delete_circular_List(Head,4);
    display(Head);
}
