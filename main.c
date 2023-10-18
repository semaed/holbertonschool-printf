#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    // Call _printf to print a sentence and store the character count in len
    len = _printf("Let's try to printf a simple sentence.\n");

    // Call printf to print the same sentence and store the character count in len2
    len2 = printf("Let's try to printf a simple sentence.\n");

    // Print the character count of _printf and printf for the first sentence
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    // Print a negative integer using _printf and printf
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    // Print a character using _printf and printf
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    // Print a string using _printf and printf
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    // Call _printf to print the percent symbol and store the character count in len
    len = _printf("Percent:[%%]\n");

    // Call printf to print the percent symbol and store the character count in len2
    len2 = printf("Percent:[%%]\n");

    // Print the character count of _printf and printf for the percent symbol
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    // Attempt to print an unknown format specifier with _printf and printf
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    return (0); // Return 0 to indicate successful execution
}
