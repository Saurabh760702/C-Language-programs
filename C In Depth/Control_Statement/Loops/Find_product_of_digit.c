#include<stdio.h>
int main(void){
    int n,prod=1,rem;
    printf("Enter a number : ");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        prod=prod*rem;
        n=n/10;
    }
    printf("productof digit is = %d\n",prod);
    return 0;
    
}