#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer
 * @s: pointer to a char
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int sign = 1, result = 0, i = 0;
	int neg = 0;
	int flag = 0;

	while (s[i])
	{
		if (flag && !(s[i] <= '9' && s[i] >= '0'))
		{
			break;
		}
		if (s[i] == '-')
		{
			neg++;
		}
		else if (s[i] <= '9' && s[i] >= '0')
		{
			flag = 1;
			if (neg % 2 != 0)
			{
				sign = -1;
			}
			result = result * 10 + (s[i] - '0') * sign;
		}
		i++;
	}
	return (result);
}
