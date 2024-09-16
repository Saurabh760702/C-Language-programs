#include<stdint.h>
int main(void){
    int n,num;
    double fact=1;
    printf("Enter the Number : ");
    scanf("%d",&n);
    num=n;
    if (n<0)
    {
        printf("NO factorial of Negative Number");
    }
    else
    {
        
        while (n>1)
        {
            fact=fact*n;
            n--;
        }
        printf("Factorial of %d=%1d\n",num,fact);
        
    }
    return 0;
    
    
}