#include<stdio.h>
int main(void){
    int x=5, y=2;
    float p,q ,r;
    p=x/y;
    printf("p=%f\n",p);
    q=(float)x/y;
    printf("q=%f\n",q);
    r=(float)(x/y);
    printf("q=%f\n",r);
    return 0;
}