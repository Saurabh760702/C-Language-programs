#include<stdio.h>
int main(void){
    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);
    if (year%100 !=0)
    {
        if (year%4==0)
        {
            printf("This is leap year=%d",year);
        }
        else
        {
            printf("This is not a leap year");
        }
        
    }
    else{
        if (year%400==0)
        {
             printf("This is leap year");
        }
        else
        {
             printf("This is not leap year=%d",year);
        }
        
    }
    return 0;
    
}