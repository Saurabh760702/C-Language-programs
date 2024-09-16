#include<stdio.h>
int main(void){
    int a,b;
    printf("Enter the 2 Number :  ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("A is grater then B=%d\n", a);
    }
    else
    {
        printf("B is greater the A=%d\n",b);
    }
    
    return 0;
}