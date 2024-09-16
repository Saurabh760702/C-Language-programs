// C Program to calculate
// Factorial of a number
#include <stdio.h>
int main()
{
    int N;
     unsigned long long int ans = 1;
    printf("Enter a number : ");
    scanf("%D",&N);

// Calculating factorial using iteration
//void factorial_iteration(int N)

   // unsigned long long int ans = 1;
    for (int i = 1; i <= N; i++) {
        ans = ans * i;
    }

    printf("Factorial of %d is %lld\n", N, ans);


    return 0;
}