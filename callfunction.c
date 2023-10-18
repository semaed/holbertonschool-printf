#include "main.h"
/**
 * call_functions - function to call the correct printing function.
 * @format: pointer to the input
 * @args: list of the arguments passed
 * Return: number of characters printed if the function works correctly
 *         and -1 if it fails
 */
int call_functions(const char* format, va_list args)
{
    int i, pc;
    pc = 0;

    // Check if the format string is NULL or empty
    if (format == NULL || format[0] == '\0')
        return -1;

    // Loop through the format string
    for (i = 0; format[i] != '\0'; i++)
    {
        // Check for characters other than '%'
        if (format[i] != '%')
        {
            // Handle special case for null character
            if (format[i] == '\0')
            {
                putchar('\0');
                pc++;
            }
            else
            {
                _putchar(format[i]);
                pc++;
            }
            continue; // Continue to the next character in the format string
        }

        i++; // Move to the character after '%'

        if (format[i] == '\0')
            return -1; // Invalid format string with '%' at the end

        switch (format[i]) {
            case 'c':{
                char c = va_arg(args, int);
                _putchar(c); // Print a character
                pc++;
                break;
            }
            case 's':{
                char *str = va_arg(args, char*);
                if (str == NULL)
                    str = "(null)";
                pc += print_string(str); // Print a string
                break;
            }
            case '%':{
                _putchar('%'); // Print a '%' character
                pc++;
                break;
            }
            case 'd':
            case 'i':{
                int n = va_arg(args, int);
                pc += print_int(n); // Print an integer
                break;
            }
            default:
                _putchar('%'); // Print '%' when an unknown format specifier is encountered
                _putchar(format[i]); // Print the unknown format specifier
                pc += 2; // Increment the character count by 2
                break;
        }
    }

    return pc; // Return the total number of characters printed
}
