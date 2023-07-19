#include <stdio.h>
#include <stdlib.h>

struct Element
{
    int i;
    int j;
    int x;
};
struct Sparse
{
    int m; //Rows
    int n;  //Columns
    int num; //Non Zero Numbers
    struct Element *e; //Array of element created Dynamically
};
void create(struct Sparse *S)   //Created Structure of spars
{
    int i;
printf("Enter the Dimension:");   
scanf("%d %d",&S->m,&S->n);  //No of rows and Coloumn
printf("Enter Non Zero Number:");
scanf("%d",&S->num);          //Adding No of Non zero element
S->e=(struct Element *)malloc((S->num)*sizeof(struct Element));  //Creating array in Dynamically with size num
for(i=0;i<S->num;i++)
{
    scanf("%d%d%d",&S->e[i].i,&S->e[i].j,&S->e[i].x);  //Given Row number, coloumn number and value
}
}
void Display(struct Sparse S)
{
    int i,j,k=0;
    for(i=0;i<S.m;i++)
    {
         for(j=0;j<S.n;j++)
         {
             if(i==S.e[k].i && j==S.e[k].j)
             printf("%d",S.e[k++].x);
             else
             printf("0");
         }
         printf("\n");
    }
    
}
int main()
{
   struct Sparse S;
   create(&S);
   Display(S);
   return 0;
}
