#include<stdint.h>
int main(void){
    int n,nsave,rem,d,j=1,dec=0;
    printf("Enter the Number in Binary : ");
    scanf("%d",&n);
    nsave=n;
    while (n>0)
    {
        rem=n%10;
        d=rem*j;
        dec=dec+d;
        j=j*2;
        n=n/10;

    }
    printf("Binary Number=%d,Decimal Number=%d",nsave,dec);
    return 0;
    
}