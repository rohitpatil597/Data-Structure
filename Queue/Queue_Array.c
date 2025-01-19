#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int size;
    int rear;
    int front;
    int *Q;
};

void create(struct Queue *q,int size)
{
    q->rear=q->front=-1;
    q->size=size;
    q->Q=(int *)malloc(q->size * sizeof(int));
}

void enque(struct Queue *q,int x)
{
    if(q->rear==q->size-1)
    {
    printf("queue is full");
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int deque(struct Queue *q)
{
    int x=-1;
    if(q->rear==q->front)
    {
        printf("queue is empty");
    }
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct Queue q)
{
    int i;
    for(i=q.front+1;i<=q.rear;i++)
    {
        printf("%d\n",q.Q[i]);
    }
}
int main()
{
    struct Queue q;
    create(&q,5);
    enque(&q,10);
    enque(&q,20);
    enque(&q,30);
    enque(&q,40);
    display(q);
    printf("\nDeleting Element=%d\n",deque(&q));
    display(q);
    return 0;
}
