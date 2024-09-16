#include<stdio.h>
int main(void){
    int a=45,b=60,tem;
     printf("a=%d,b=%d\n",a,b);
     tem=a,a=b;b=tem;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}