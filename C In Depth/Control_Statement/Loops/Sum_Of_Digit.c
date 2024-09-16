#include<stdio.h>
int main(void){
    int n,sum=0,rem;
    printf("Enter a Number : ");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem;
         n=n/10;
    }
    printf("Sum of digit is = %d\n",sum);
    return 0;
    
}