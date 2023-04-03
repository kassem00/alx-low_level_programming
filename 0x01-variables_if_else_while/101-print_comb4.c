#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - program that prints.
* followed by a new line.
* Return: 0
*/
int main(void) {
int i, j, k;
for (i = 0; i < 8; i++) {
for (j = i + 1; j < 9; j++) {
for (k = j + 1; k < 10; k++) {
if ((i == 0 && j == 1 && k == 2) ||
(i == 1 && j == 0 && k == 2) ||
(i == 2 && j == 1 && k == 0) ||
(i == 0 && j == 2 && k == 1) ||
(i == 1 && j == 2 && k == 0) ||
(i == 2 && j == 0 && k == 1)) {
continue;
}
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9) {
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return 0;
}
