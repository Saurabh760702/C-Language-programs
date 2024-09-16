#include<stdio.h>
int main(void){
    int num;
    printf("Enter the Number :  ");
    scanf("%d",&num);
    if (num<0)
    {
        printf("Number Entered is Negative=%d\n",num);
        num=-num;
    }
    printf("Value of number is :%d\n",num);

     if (num%2==0)
    {
        printf("Number is Even =%d\n", num);
    }
    else
    {
        printf("Number is odd=%d\n",num);
    }
    
    
    return 0;
}