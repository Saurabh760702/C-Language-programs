// C Program to check
// Year is leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);

    // If a year is multiple of 400, then leap year
    if (year % 400 == 0)
        printf("%d is a leap year.\n", year);

    // If a year is multiple of 100, then not a leap year
    else if (year % 100 == 0)
        printf("%d is not a leap year.\n", year);

    // If a year is multiple of 4, then leap year
    else if (year % 4 == 0)
        printf("%d is a leap year.\n", year);

    // Not leap year
    else
        printf("%d is not a leap year.\n", year);


// int main()
// {
    // leap_year(2000);
    // leap_year(2002);
    // leap_year(2008);

    return 0;
}