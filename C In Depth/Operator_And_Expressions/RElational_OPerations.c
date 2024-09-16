#include<stdint.h>
int main(void){
    int a,b;
    printf("Enter the value of A and B : ");
    scanf("%d %d",&a,&b);
    if (a<b){
        printf("%d is less then %d\n",a,b);
    }
    if (a<=b)
    {
       printf("%d is less then or equal to %d\n",a,b);
    }
    if (a==b)
     printf("%d is equal to %d\n",a,b);
      if (a!=b)
     printf("%d is not equal to %d\n",a,b);
      if (a>b)
     printf("%d is greater then %d\n",a,b);
      if (a>=b)
     printf("%d is greater then or equal to %d\n",a,b);
    
    return 0;
}