#include<stdio.h>
int main(void){
    int a=-3;
    a=-a-a+!a;
    printf("a=%d\n",a);

    int e=2,b=1,c,d;
    c=a<b;
    d=(e>b)&&(c<b);
    printf("c=%d,d=%d",c,d);
    return 0;
}