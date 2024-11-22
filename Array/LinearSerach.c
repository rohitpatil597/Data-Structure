/*Written the algorithm of Linear serach */

#include <stdio.h>
#include <stdlib.h>

struct Arr{
    int data[10];
    int size;
    int len;
};

int Linear_Search(struct Arr A,int key)
{
    int i;
    for(i=0;i<A.len;i++)
    {
        if(A.data[i]==key)
        {
            printf("Position=%d\n",i);
            return 1;
        }
       
    }
    return -1;
}
int main()
{
    struct Arr A={{2,4,6,7,8,5,5},10,7};
    if(1==Linear_Search(A,5))
    {
    printf("Found the key");
    }
    else
    {
    printf("Not Found");
    }
    return 0;
}
