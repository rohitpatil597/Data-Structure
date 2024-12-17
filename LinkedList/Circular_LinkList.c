#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *Head=NULL;

void Circular_Create(int A[],int n)
{
    struct Node *t,*last;
    int i;
    Head=(struct Node*)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=Head;
    last=Head;
    for(i=1;i<n;i++)
    {
       t= (struct Node*)malloc(sizeof(struct Node));
       t->data=A[i];
       t->next=last->next;
       last->next=t;
       last=t;
       
    }
    
}
void display_circular(struct Node *h)
{
   do{
        printf("%d ",h->data);
        h=h->next;
    }while(h !=Head);
}

int main()
{
    int A[]={1,2,3,4,5};
    Circular_Create(A,5);
   
    display_circular(Head);
    return 0;
}
