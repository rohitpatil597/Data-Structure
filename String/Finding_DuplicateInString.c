#include <stdio.h>

int main ()
{
char A[10]="Finding";
int i,j,count=0;
for(i=0;A[i] !='\0';i++)
{
    for(j=i+1;A[j] !='\0';j++)
    {
        if (A[i]==A[j])
        {
         count++;
         A[i]=0;
        }
    }
}
if(count)
{
    printf("Find duplicate %d",count+1);
}
else
{
    printf("Not found duplicate");
}
return 0;
}
