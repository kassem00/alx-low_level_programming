#include "main.h"
/**
 * *_strdup - immpalimante funcation array
 * @str: the char .
 * Return: char.
 */
char *_strdup(char *str)
{
int i = 0;
char *array_of_char;
if (str == NULL)	
return (NULL);	
while (str[i] != '\0')
i++;
array_of_char = malloc((sizeof(char) * (i + 1)));
if (array_of_char == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
array_of_char[i] = str[i];
array_of_char[i] = '\0';
return (array_of_char);	
}
