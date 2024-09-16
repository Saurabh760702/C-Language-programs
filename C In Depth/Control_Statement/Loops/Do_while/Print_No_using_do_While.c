#include<stdint.h>
int main(void){
    int n, i=1;;
    printf("Enter the Number : ");
    scanf("%d",&n);
   /* do
    {
        printf("%d\t",i);
        i=i+1;
    } while (i<=n);
    printf("\n");*/

    do
    {
        printf("%d\t",n);
        n=n-1;
    } while (n>=i);
    printf("\n");
    
    return 0;
}
    

    