#include "main.h"
/**
 * create_array - immpalimante funcation array
 * @c: the char .
 * @size: the size of the memory to print
 * Return: Nothing.
 */
char *_strdup(char *str)
{
int ret,size = strlen(str),i;
char *ma_str;
if (str == NULL)
ret = 1;
else
{
ma_str = malloc(sizeof(char) *size);
for (i = 0; str[i] != '\0';i++)
ma_str[i] = str[i];
ma_str[i] = '\0';
}
if (ret == 1)
return (NULL);
else

}
