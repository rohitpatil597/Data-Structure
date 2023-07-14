#include <stdio.h>
int main()
{
    char A[]="abcd";
    char B[]="dcba";
    int H[100]={0};
    int i,j;
    for(i=0;A[i] !='\0';i++)
    {
        H[A[i]-97]+=1;
    }
     for(i=0;B[i] !='\0';i++)
    {
        H[B[i]-97]-=1;
        
    }
    for(i=0;i<100;i++)
    {
        if(H[i] !=0)
        j++;
    }
    if(j)
    {
        printf("its not anagram");
    }
    else
    {
        printf("its is anagram");
    }
return 0;
}
