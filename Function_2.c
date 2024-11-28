#include<stdio.h>
long Q(int j, int k)
{
    if(j < k)
    return 5;

    else
    return Q(j-k,k+2)+j;
}
int main()
{
    int j,k;
    printf("\n Enter the value of j: ");
    scanf("%d",&j);
    printf("\n Enter the value of k: ");
    scanf("%d",&k);
    printf("\n Output = %d",Q(j,k));

    return 0;
}