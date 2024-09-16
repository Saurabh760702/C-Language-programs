// C Program for
// Checking value is
// Prime or not
#include <stdio.h>

int main()
{
    int N,flag = 0;
    printf("Enter a number to check isprime or not : ");
    scanf("%d",&N);


    // Iterate from 2 to N/2
    for (int i = 2; i <= N / 2; i++) {

        // If n is divisible by any number between 2 and
        // n/2, it is not prime
        if (N % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Not a Prime Number");
    else
        printf("Is a Prime Number");
    return 0;
}
