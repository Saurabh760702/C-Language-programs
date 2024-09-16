// C Program for converting
// binary to decimal
#include <stdio.h>

int main()
{
    int N;
    printf("Enter the Binary Number : ");
    scanf("%d",&N);

    // Initializing base value a to 1
    int a = 1;
    int b = 0;
    while (N != 0) {
        b = b + (N % 10) * a;
        N = N / 10;
        a = a * 2;
    }

    printf("Decimal Number is : %d", b);
    return 0;
}