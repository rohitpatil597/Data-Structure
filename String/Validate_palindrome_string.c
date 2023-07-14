#include <stdio.h>

int main ()
{
char A[]="madam";
char B[]="madam";

int i,j;

for(i=0;A[i] !='\0';i++);
for(j=0;B[j] !='\0';j++);

for(i=0,j=j-1;A[i] !='\0' && B[j] !='\0';i++,j--)
{
    if(A[i]!=B[j])
    break;
}

if(A[i]==B[j])
printf("Its palindrom string");
else
printf("Its Not palindrom string");
return 0;
}
