#include <stdlib.h>
#include <stdio.h>

struct stack{
    int *s;
    int size;
    int top;
};

void create_stack(struct stack *st)
{
    printf("Enter the size of stack:");
    scanf("%d",&st->size);
 
    st->top=-1;
    
    st->s=(int *)malloc(st->size * sizeof(int));
}

void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d ",st.s[i]);
    }
}
void push(struct stack *st,int x)
{
    if(st->top==st->size-1)

        printf("Its overflow");

    else
 
        st->top++;
        st->s[st->top]=x;

}
int pop(struct stack *st)
{
    int x;
    if(st->top==-1)
    {
        printf("its underflow");
    }
    else
    {
        x=st->s[st->top];
         
        st->top--;
    }
    return x;
}
int peek(struct stack st,int index)
{
    return st.s[st.top-index+1];
}
int check_status(struct stack st)
{
    if(st.top==st.size-1)
    return 1;
    else if(st.top==-1)
    return -1;
}
int stacktop(struct stack st)
{
    return st.s[st.top];
}
int main()
{
    struct stack s1;
    create_stack(&s1);
    push(&s1,31);
    push(&s1,2);
    push(&s1,23);
    push(&s1,4);

    printf("%d\n",stacktop(s1));

    display(s1);
    return 0;
}
