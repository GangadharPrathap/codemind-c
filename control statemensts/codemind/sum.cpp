#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0,r;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }printf("%d",sum);
}