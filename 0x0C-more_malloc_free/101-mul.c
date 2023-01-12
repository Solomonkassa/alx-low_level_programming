#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _isNum - check if is a number
*@num: string to check
*Return: 1 is numm, 0 not num
*/
int _isNum(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}

/**
* *_memset - copies a character to the firstn characters of the string pointed
*@s: original string
*@b: value to remplace
*@n: number of bytes
*Return: s (string modify)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
* _strlen - returns the lenght of a string
*@s: poiter of character
*Return: the length of a string
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
* main - multiple 2 positive numbers
*@argc: argument counter
*@argv: number to multiply
*Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int length, c, prod, i, j, l1, l2;
	int *res;

	if ((argc != 3 || !(_isNum(argv[1]))) || !(_isNum(argv[2])))
		puts("Error"), exit(98);
	l1 = _strlen(argv[1]), l2 = _strlen(argv[2]);
	length = l1 + l2;
	res = calloc(length, sizeof(int *));
	if (res == NULL)
		puts("Error"), exit(98);
	for (i = l2 - 1; i > -1; i--)
	{
		c = 0;
		for (j = l1; j > -1; j--)
		{
			prod = (argv[2][i] - '0') * (argv[1][j] - '0');
			c = (prod / 10);
			res[(i + j) + 1] += (prod % 10);
			if (res[(i + j) + 1] > 9)
			{
				res[i + j] += res[(i + j) + 1] / 10;
				res[(i + j) + 1] = res[(i + j) + 1] % 10;
			}
			res[(i + j) + 1] += c;
		}
	}

	if (res[0] == 0)
		i = 1;
	else
		i = 0;
	for (; i < length; i++)
		printf("%d", res[i]);

	printf("\n");
	free(res);
	return (0);
}
