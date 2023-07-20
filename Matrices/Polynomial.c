#include <stdio.h>
#include <stdlib.h>

struct term{
    int coeff;
    int expo;
};
struct poly{
    int num;
    struct term *terms;
};
void create(struct poly *poly)
{
    int i,j;
    printf("enter the number:");
    scanf("%d",&poly->num);
    poly->terms=(struct term *)malloc(poly->num * sizeof(struct term));
    printf("Enter the terms\n");
    for(i=0;i<poly->num;i++)
    {
        scanf("%d%d",&poly->terms[i].coeff,&poly->terms[i].expo);
    }
}
void Display(struct poly p)
{
    int i,j;
    for(i=0;i<p.num;i++)
    {
        printf("%dx%d+",p.terms[i].coeff,p.terms[i].expo);
    }
}
int main()
{
    struct poly p;
    create(&p);
    Display(p);
    return 0;
}
