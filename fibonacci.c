#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int calculate(int n);

int main(void)
{
    int input = get_int("How many Fibonaccis: ");
    int fibonacci[input];
    for (int i = 0; i < input; i++)
    {
        fibonacci[i] = calculate(i + 1);
        printf("%i ", fibonacci[i]);
    }
    printf("\n");
}

int calculate(int n)
{

    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return calculate(n-2) + calculate(n-1);

}