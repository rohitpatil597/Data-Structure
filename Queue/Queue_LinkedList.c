#include <stdio.h>
#include <stdlib.h>

struct Node{
   struct Node *next;
   int data;
};

struct Node *front=NULL;
struct Node *rear =NULL;

void enque(int x)
{
    struct Node *t=NULL;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL)
        printf("Queue Is full");
    else
    {
        t->data=x;
        t->next=NULL;
        if(front==NULL)
        front=rear=t;
        else
        {
        rear->next=t;
        t->next=NULL;
        rear=t;
        }
    }
}
int deque()
{
    int x=-1;
    struct Node *t;
    if(front == NULL)
    printf("Queue is empty");
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}
void display()
{
    struct Node *p=front;
    while(p)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main()
{
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    display();
    printf("deleted element=%d\n",deque());
    display();
    return 0;
}
