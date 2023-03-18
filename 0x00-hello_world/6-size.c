#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sized(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sized(b));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sized(c));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sized(d));
printf("Size of a float: %lu bytes(s)\n", (unsigned long )sized(f));
return (0);
}
