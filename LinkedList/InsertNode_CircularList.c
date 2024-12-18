#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *Head=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *f,*last;
    Head=(struct Node *)malloc(sizeof(struct Node));
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

void Inser_Node(struct Node *p,int index,int x)
{
    struct Node *t;
    int i;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->next=NULL;
    t->data=x;
    
    if(index==0)
    {
       if(Head==NULL)
       {
           Head=t;
           Head->next=Head;
       }
       else
       {
           while(p->next !=Head)
           p=p->next;
           p->next=t;
           t->next=Head;
           Head=t;
       }
    }
    else
    {
       
        for(i=0;i<index-1;i++)
             p=p->next;
             t->next=p->next;
             p->next=t;
    }
}
void display(struct Node *p)
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
    Inser_Node(Head,3,9);
    display(Head);
    return 0;
}
