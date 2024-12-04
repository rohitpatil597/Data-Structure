#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[]="Finding";
    int i,j;
    int count;
    for(i=0;A[i] !='\0';i++)
    {
        for(j=i+1;A[j]!='\0';j++)
        {
            if(A[i]==A[j])
            {
            count++;
            printf("%c\n",A[i]);
            }
        }
    }
    if(!count)
    {
         printf("Not Found in the string");
    }
    return 0;
}
