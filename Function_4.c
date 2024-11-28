#include<stdio.h>
long Q(int a, int b)
{
    if(a < b)
    return 0;

    else
    return Q(a-b,b)+1;
}
int main()
{
    int a,b;
    printf("\n Enter the value of a: ");
    scanf("%d",&a);
    printf("\n Enter the value of b: ");
    scanf("%d",&b);
    printf("\n Output = %d",Q(a,b));

    return 0;
}