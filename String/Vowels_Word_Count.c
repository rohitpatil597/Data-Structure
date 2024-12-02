#include <stdio.h>
#include <stdlib.h>

int main()
{
char str[]="I Love my india";
int i;
int vcount;
int wcount;

for(i=0;str[i] !='\0';i++)
{
    if((str[i] >= 65 && str[i] <= 90)|| (str[i] >= 97 && str[i] <= 122))
    {
    if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u') ||
      (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O'|| str[i]=='U'))
      {
     vcount++;
      }
       wcount++; 
}

}
printf("vowels=%d and word=%d",vcount,wcount);
return 0;
}
