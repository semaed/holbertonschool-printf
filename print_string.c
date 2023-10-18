#include "main.h"
/**
 * print_string - prints a string
 * @str: pointer to the string to print
 * Return: number of characters printed
 */
int print_string(char *str)
{
    int size, written, res;

    // Check if the input string is NULL
    if (str == NULL) {
        return 0;
    }

    // Calculate the length of the input string
    size = strlen(str);

    // Initialize the number of characters written to 0
    written = 0;

    // Loop through the string and print it in chunks
    while (written < size) {
        // Attempt to write the string to STDOUT
        res = write(STDOUT_FILENO, str + written, size - written);

        // Check if an error occurred while writing
        if (res < 0) {
            return written; // Return the number of characters written so far
        }

        // Update the total number of characters written
        written += res;
    }

    // Return the total number of characters printed
    return written;
}
