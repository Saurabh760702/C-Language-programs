#include<stdio.h>
int main(void){
    int i,n;
    printf("Enter the last no.c : ");
    scanf("%d",&n);
    //print number from 1 to n in ascending order
    for ( i = 1; i<=n; i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    //print number from n to 1 in decending order
    for (i = n; i>=1; i=i-2)
    {
        printf("%d\t",i);
    }
    return 0;
    
}