#include<stdio.h>
int main(void)
{
    int b=1500;
    float h=200.50;
    char g='A';
    printf("Basic=%d,HRA=%f,Grade=%C\n",b,h,g);
    printf("Basic=%d\nHRA=%f\nGrade=%C\n",b,h,g);
    printf("Basic=%d\tHRA=%f\tGrade=%C\t",b,h,g);
    return 0;
}