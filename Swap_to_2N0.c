// C Program to
// Swap two numbers
// No Extra Space
#include <stdio.h>

int main()
{

    int x,y;
    printf("Enter the two number : ");
    scanf("%d%d",&x,&y);

    printf("x: %d , y: %d\n", x, y);

    // Code to swap 'x' and 'y'
    x = x + y;
    y = x - y;
    x = x - y;

    printf("x: %d , y: %d\n", x, y);

    return 0;
}
