#include <stdio.h>

int main()
{
    int N, x= 0;
    printf("Enter a number to print prime no : ");
    scanf("%d",&N);

    for (int i = 2; i <= N; i++)
    {
        x=1;
    // Iterate from 2 to N/2
    for (int j = 2; j <= i / 2; j++) {

        // If n is divisible by any number between 2 and
        // n/2, it is not prime
        if (i % j == 0) {
            x = 0;
            break;
        }
    }
    

    if (x == 1)
        printf("%d ",i);
    }
    return 0;
}
