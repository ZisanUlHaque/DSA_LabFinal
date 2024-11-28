#include<stdio.h>
long fab(int n)
{
    if(n == 0)
    return 0;

    if(n == 1)
    return 1;

    else
    return fab(n-1)+fab(n-2);
}
int main()
{
    int n;
    printf("\n Enter the number: ");
    scanf("%d",&n);
    printf("%d Fabonacci is %ld",n,fab(n));

    return 0;
}