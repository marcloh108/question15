#include <stdio.h>
#include <limits.h>

int divide(int x, int y)
{
    // handle divisibility by 0
    if (y == 0)
    {
        printf("Error!! Divisible by 0");
        exit(1);
    }

    //store sign of the result
    int sign = 1;
    if (x * y < 0)
        sign = -1;

    //convert both dividend and divisor to positive
    x = abs(x), y = abs(y);

    //initialise quotient by 0
    int quotient = 0;

    //loop till dividend x is more than the divisor y
    while (x >= y)
    {
        x = x - y;
        quotient++;
    }
    printf("Remainder is %d\n", x);

    return sign * quotient;
}

//main function to perform division of two numbers
int main()
{
    int dividend = 15;
    int divisor = 3;

    printf("Quotient after dividing %d and %d : %d\n", dividend, divisor, divide(dividend,divisor));

    return 0;
}
