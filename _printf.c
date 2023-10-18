#include "main.h"
/**
 * _printf - custom printf function
 * @format: pointer to the input
 * Return: number of characters printed if format is not NULL and not empty,
 *         -1 otherwise
 */
int _printf(const char* format, ...)
{
    va_list args; // Declare a va_list to hold the variable arguments
    int pc; // Initialize an integer to keep track of printed characters

    // Check if the format string is NULL or empty
    if (format == NULL || format[0] == '\0')
        return -1; // Return -1 to indicate an error

    va_start(args, format); // Start processing variable arguments
    pc = call_functions(format, args); // Call the function to process and print the format
    va_end(args); // End processing variable arguments

    return pc; // Return the total number of characters printed
}
