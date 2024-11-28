#include<stdio.h>
long H(int n)
{
    if(n < 5)
    return 3*n;

    else
    return 2*H(n-5)+7;
}
int main()
{
    int n;
    printf("\n Enter the value of a: ");
    scanf("%d",&n);
    printf("\n Output = %d",H(n));

    return 0;
}