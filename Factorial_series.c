#include<stdio.h>
long fact(int n)
{
    if(n == 0)
    return 1;

    else
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("\n Enter the number: ");
    scanf("%d",&n);
    printf("%d Factorial is %ld",n,fact(n));

    return 0;
}