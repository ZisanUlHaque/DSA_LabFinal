#include<stdio.h>
long L(int n)
{
    if(n == 1)
    return 0;

    else
    return L(n/2)+1;
}
int main()
{
    int n;
    printf("\n Enter the value of a: ");
    scanf("%d",&n);
    printf("\n Output = %d",L(n));

    return 0;
}