#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[]="Finding";
    char H[26];
    int i;
    int count;
    
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(H[i] > 1)
        {
        printf("%c ",i+97);
        printf("%d\n",H[i]);
        }
    }
    return 0;
}
