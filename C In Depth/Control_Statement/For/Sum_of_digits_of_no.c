#include <stdio.h>
int main(void)
{
    int n,sum=0,rem;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (n=n;n>0;n=n/10)
    {
        rem=n%10;
        sum=sum+rem;

    }
    printf("sum of digits=%d\n",sum);
    return 0;
    
}