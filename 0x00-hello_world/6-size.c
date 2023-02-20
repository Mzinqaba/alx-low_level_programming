#include <stdio.h>
/**
 * main -A program that prints the size of various types on the computer.
 * Return:Returns(0)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
printf("size of a char: %u byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %u byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %u byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %u byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %u byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
