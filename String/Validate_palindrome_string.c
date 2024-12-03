#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[]="madam";
    char B[7];
    int i,j;
    for(i=0;A[i] !='\0';i++)
    {
        
    }
    i=i-1;
    for(j=0;i>=0;j++,i--)
    {
        B[j]=A[i];
    }
    B[j]='\0';
    printf("%s\n",B);
    
    for(i=0;A[i]!='\0';i++)
    {
       if(A[i]!=B[i])
       {
            printf("Its is not palindrome");
            break;
       }
       
    }
    if(A[i]==B[i])
    {
    printf("Its palindrome");
    }

    return 0;
}
