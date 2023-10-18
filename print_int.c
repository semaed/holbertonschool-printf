#include "main.h"
/**
 * print_int - prints an integer
 * @n: integer to print
 * Return: number of digits printed
 */
int print_int(int n)
{
    int pc = 0;
    unsigned int num;

    // Check if the integer is negative
    if (n < 0)
    {
        _putchar('-'); // Print a negative sign
        pc++; // Increment the character count
        num = -n; // Take the absolute value of the integer
    }
    else
    {
        num = n;
    }

    // Recursively print digits for numbers greater than 9
    if (num > 9)
    {
        pc += print_int(num / 10); // Recursive call to print_int
    }

    // Print the last digit as a character
    _putchar((num % 10) + '0');

    pc++; // Increment the character count for the last digit

    return pc; // Return the total number of digits printed
}
