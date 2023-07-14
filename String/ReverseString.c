#include <stdio.h>

int main()
{
    char str[100]="Rohit";
    char rev_str[100];
    
    int i,j;
    for(i=0;str[i] !='\0';i++)
    {
    }                            //Updating ith Value
        i=i-1;
        for(j=0;i>=0;j++,i--)
        {
            rev_str[j]=str[i];
           
        }
      rev_str[j]='\0';          // added '/0' last to string
    printf("%s",rev_str);
    return 0;
}
