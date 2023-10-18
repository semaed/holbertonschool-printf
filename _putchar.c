#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    if (c == '\0')
    {
        return (-1); // Return -1 for a null character, indicating an error
    }

    // Write the character 'c' to the standard output (stdout)
    return (write(1, (unsigned char*)&c, 1));
}
