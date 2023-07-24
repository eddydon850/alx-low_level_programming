/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 *
 * Return: returns converted integer from string
 */

int _atoi(char *s)
{
	unsigned int no = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			no = (no * 10) + (*s - '0');
		else if (no > 0)
			break;
	} while (*s++);

	return (no * sign);
}
