#include "main.h"
#include <limits.h>
/**
 * str_len - finds string length
 * @str: input pointer to string
 * Return: length of string
 */
int str_len(char *str)
{
	int len;

	for (len = 0; *str != '\0'; len++)
		len++, str++;
	return (len / 2);
}
/**
 * _calloc - allocates memory for an array using malloc
 * @bytes: bytes of memory needed per size requested
 * @size: size in bytes of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int bytes, unsigned int size)
{
	unsigned int i;
	char *p;

	if (bytes == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / bytes || bytes >= UINT_MAX / size)
		return (NULL);
	p = malloc(size * bytes);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < bytes * size; i++)
		p[i] = 0;
	return ((void *)p);
}
/**
 * add_arrays - adds 2 arrays of ints
 * @mul_result: pointer to array with numbers from product
 * @sum_result: pointer to array with numbers from total sum
 * @len_r: length of both arrays
 * Return: void
 */
void add_arrays(int *mul_result, int *sum_result, int len_r)
{
	int i = 0, len_r2 = len_r - 1, carry = 0, sum;

	while (i < len_r)
	{
		sum = carry + mul_result[len_r2] + sum_result[len_r2];
		sum_result[len_r2] = sum % 10;
		carry = sum / 10;
		i++;
		len_r2--;
	}
}
/**
 * is_digit - checks for digits
 * @c: input character to check for digit
 * Return: 0 failure, 1 success
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	printf("Error\n");
	return (0);
}
/**
 * multiply - multiplies 2 #'s, prints result, must be 2 #'s
 * @num1: factor # 1 (is the smaller of 2 numbers)
 * @len_1: length of factor 1
 * @num2: factor # 2 (is the larger of 2 numbers)
 * @len_2: length of factor 2
 * @len_r: length of result arrays
 * Return: 0 fail, 1 success
 */
int *multiply(char *num1, int len_1, char *num2, int len_2, int len_r)
{
	int i = 0, i1 = len_1 - 1;
	int i2, product, carry, digit, *mul_result, *sum_result;

	sum_result = _calloc(sizeof(int), (len_r));
	while (i < len_1)
	{
		mul_result = _calloc(sizeof(int), len_r);
		i2 = len_2 - 1, digit = (len_r - 1 - i);
		if (!is_digit(num1[i1]))
			return (NULL);
		carry = 0;
		while (i2 >= 0)
		{
			if (!is_digit(num2[i2]))
				return (NULL);
			product = (num1[i1] - '0') * (num2[i2] - '0');
			product += carry;
			mul_result[digit] += product % 10;
			carry = product / 10;
			digit--, i2--;
		}
		add_arrays(mul_result, sum_result, len_r);
		free(mul_result);
	    i++, i1--;
	}
	return (sum_result);
}
/**
 * print_me - prints my array of the hopeful product here
 * @sum_result: pointer to int array with numbers to add
 * @len_r: length of result array
 * Return: void
 */
void print_me(int *sum_result, int len_r)
{
	int i = 0;

	while (sum_result[i] == 0 && i < len_r)
		i++;
	if (i == len_r)
		_putchar('0');
	while (i < len_r)
		_putchar(sum_result[i++] + '0');
	_putchar('\n');
}
/**
 * main - multiply 2 input #'s of large lengths and print result or print Error
 * @argc: input count of args
 * @argv: input array of string args
 * Return: 0, Success
 */
int main(int argc, char **argv)
{
	int len_1, len_2, len_r, temp, *sum_result;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len_1 = str_len(argv[1]), len_2 = str_len(argv[2]);
	len_r = len_1 + len_2;
	if (len_1 < len_2)
		num1 = argv[1], num2 = argv[2];
	else
	{
		num1 = argv[2], num2 = argv[1];
		temp = len_2, len_2 = len_1, len_1 = temp;
	}
	sum_result = multiply(num1, len_1, num2, len_2, len_r);
	if (sum_result == NULL)
		exit(98);
	print_me(sum_result, len_r);
	return (0);
}
