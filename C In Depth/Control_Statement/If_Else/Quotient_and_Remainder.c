#include<stdio.h>
int main(void){
    int a,b,q,r;
    printf("Enter the 2 Number :  ");
    scanf("%d%d",&a,&b);
    if (b)
    {
        q=a/b;
        r=a%b;
        printf("Quotient=%d,Remainder=%d\n",q,r);
    }
    else
    {
        printf("Divide by Zero Erroe\n");
    }
    return 0;
}
    