#include<stdio.h>
int main(void){
    int a,b,c,big;
    printf("Enter the three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            big=a;
        }
        else
        {
            big=c;
        }
        
    }
    else{
        if (b>c)
        {
            big=b;
        }
        else
        {
            big=c;
        }
        
    }
    printf("Biggest Number is =%d\n",big);
    return 0;
    
}