#include "holberton.h"
int _strLen(char *str);
int check_ifPalindrome(char str[], int s, int e);

/**
 * is_palindrome - function that returns 1 if a string is a
 * palindrome and 0 if not
 * @s: the string
 *
 * Return: 1 if the string is a palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = _strLen(s) - 1;

	return (check_ifPalindrome(s, 0, len));
}

/**
 * _strLen - function that finds the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */

int _strLen(char *str)
{
	if (!*str)
	{
		return (0);
	}
	else
	{
		return (1 + _strLen(str + 1));
	}
}

/**
 * check_ifPalindrome - function that checks to see if the
 * string is a palindrome
 * @str: the string
 * @s: the first letter of the string/array - at index 0
 * @e: the last leeter of the string/array - at last index
 *
 * Return: 1 if the string is a palindorme or 0 if not
 */

int check_ifPalindrome(char str[], int s, int e)
{
	/* if there is only 1 character */
	if (str[s] == str[e])
	{
		return (1);
	}

	/* if 1st and last characters do not match */
	else if (str[s] != str[e])
	{
		return (0);
	}

/* If there are more than two characters, check if */
/* middle substring is also palindrome or not. */
	else if (s < e + 1)
	{
		return (check_ifPalindrome(str, s + 1, e - 1));
	}
	return (1);
}
