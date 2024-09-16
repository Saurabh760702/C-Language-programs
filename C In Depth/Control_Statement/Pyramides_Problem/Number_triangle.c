#include<stdio.h>
int main(void){
    int i,j,n;
    printf("Enter the line of lenght of pyramid :");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
     for ( i = n; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    return 0;
    

}