#include<stdio.h>
int main(void)
{
    int i,n,sum=0,term=1;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1; i<=n;i++){
        sum=sum+term;
        term=term+1;
    }
    printf("The sum number of series 1 upto %d terms is %d\n",n,sum);
    return 0;
}