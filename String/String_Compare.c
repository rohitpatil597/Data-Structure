#include <stdio.h>

int main ()
{
  char A[100] = "Rohit";
  char B[100] = "Rohit";  //Comparing both the string
  int i, j;

  for (i=0,j=0;A[i]!='\0' && B[j] !='\0'; i++, j++)
    {
        if (A[i] != B[j])
        break;
         
    }
    if(A[i]==B[j])
      printf("Same String");
      else
      printf("Different String");
  return 0;
}
