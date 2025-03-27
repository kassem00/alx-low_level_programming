int is_palindrome(char *s)
{
	char *start = s;
	static char *end;
	static int length;
	int result;

	if (*s == '\0')
		return (1);
	if (!end)
	{
		while (*s)
		{
			s++;
			length++;
		}
		end = s - 1;
		s = start;
	}
	if (s >= end)
		result = 1;
	else if (*s != *end)
		result = 0;
	else
	{
		end--;
		result = is_palindrome(s + 1);
		end++;
	}
	if (s == start)
	{
		end = 0;
		length = 0;
	}
	return (result);
}
