#include<stdio.h>
int main(void){
    int n,count=0,rem;
    printf("Enter tbe number : ");
    scanf("%d",&n);
    do
    {
        n=n/10;
        count++;

    } while (n>0);
    printf("Number of Digits=%d\n",count);
    return 0;
    
}