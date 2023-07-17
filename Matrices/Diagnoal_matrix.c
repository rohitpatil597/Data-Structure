#include <stdio.h>

struct matrix{
    int A[10];
    int n;
};
void Set(struct matrix *m,int i,int j,int x)
{
    if(i==j)
    
    m->A[i-1]=x;
    
}
int get_matrix(struct matrix m,int i,int j)
{
    if(i==j)
    return m.A[i-1];
    else
    return 0;
}
void display(struct matrix m)
{
int i,j;
for(i=0;i<m.n;i++)
{
for(j=0;j<m.n;j++)
{
if(i==j)
printf("%d ",m.A[i]);
else
printf("0 ");
}
printf("\n");
}
}
int main()
{
    struct matrix m;
    m.n=4;
    Set(&m,1,1,5);Set(&m,2,2,8);Set(&m,3,3,10);Set(&m,4,4,12);
    printf("%d\n",get_matrix(m,2,2));
    display(m);
    
    return 0;
}
