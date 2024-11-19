/*
Description:
Adding natural number from 0 to nth poisition
1) 1,2,3,4..n.
2) 1,2,3,4..(n-1),n
sum(n)= sum(n-1)+n
*/
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return sum(n-1)+n;
}
int main()
{
    printf("%d",sum(9));
    return 0;
}
