#include<stdio.h>
int main(void)
{
    int a,b,i;
    int result=0;
    printf("Enter the two no to be multipled : ");
    scanf("%d%d",&a,&b);
    for(i=1; i<=b;i++){
        result=result+a; 
    }
    printf("%d*%d=%d\n",a,b,result);
    return 0;
}