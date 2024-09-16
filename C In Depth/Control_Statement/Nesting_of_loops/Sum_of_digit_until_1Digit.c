#include <stdio.h>
int main(void)
{
    long num;
    int dig,sum;
    printf("Enter the Number : ");
    scanf("%d",&num);
    printf("%ld->",num);
    do
    {
        sum=0;
        while (num != 0)
        {
            dig=num%10;
            sum=sum+dig;
            num=num/10;
        }
        printf("%d\t",sum);
        num=sum;
    } while (num/10!=0);
    return 0;
}