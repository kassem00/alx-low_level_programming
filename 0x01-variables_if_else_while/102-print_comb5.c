#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - program that prints.
* followed by a new line.
* Return: 0
*/int main(void)
{
    int i, j;

    for (i = 0; i < 100; i++)
    {
        for (j = i + 1; j < 100; j++)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(' ');
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');

            if (i == 98 && j == 99)
                break;

            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return (0);
}
