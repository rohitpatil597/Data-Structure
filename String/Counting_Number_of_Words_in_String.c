#include <stdio.h>

int main()
{
    char str[]="I Love My India";

 int i,count=1;
 for(i=0;str[i] !='\0';i++)
 {
     if(str[i-1] != ' ')
     {
     if(str[i] ==' ')
     {
         count++;
     }
     }
 }
 printf("%d",count);
    return 0;
}
