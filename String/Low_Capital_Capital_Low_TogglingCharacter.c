#include <stdio.h>

void convert_Capital_small(char str[])
{
    int i;
    for(i=0;str[i] !='\0';i++)
    {
        str[i] +=32;
    }
    printf("\n%s",str);
    
}
void convert_small_capital(char str[])
{
    int i;
    for(i=0;str[i] !='\0';i++)
    {
        str[i] -=32;
    }
    printf("%s",str);
    
}
void Toggle_character(char str[])
{
    int i;
    for(i=0;str[i] !='\0';i++)
    {
        if(str[i] <= 90 && str[i] >= 65)
        {
            str[i] +=32;
        }
        else if (str[i] >= 97 && str[i] <= 128)
        {
            str[i] -=32;
        }
    }
    printf("\n%s",str);
    
}
int main()
{
    char str[]="welcome";
    char str1[]="INDIA";
    char str2[]="AbCdYz";
    
 convert_small_capital(str);
 convert_Capital_small(str1);
 Toggle_character(str2);
 
    return 0;
}
