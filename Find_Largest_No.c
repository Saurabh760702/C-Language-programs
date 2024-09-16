#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the Three Number : ");
    scanf("%d%d%d",&a,&b,&c);
   // a=x;b=y;c=z;

    // condition for a is greatest
    if (a > b && a > c)
        printf("%d", a);

    // condition for b is greatest
    else if (b > a && b > c)
        printf("%d", b);

    // remaining conditions
    // c is greatest
    else
        printf("%d", c);

    return 0;
}
