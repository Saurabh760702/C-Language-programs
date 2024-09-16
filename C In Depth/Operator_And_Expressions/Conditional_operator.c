#include<stdio.h>
int main(void){
    int a,b,max;
    printf("Enter the value of A and B is : ");
    scanf("%d %d",&a,&b);
    max=a>b ? a:b;
    printf("Larger of %d and %d is %d\n",a,b,max);
    return 0;

}