#include <stdio.h>

/**
* main - print the string the size of various types on the computer it is compiled and run on
*
* Description: using the main function to write the code
* Return: 0
*/
int main(void)
{
	char s;
	int n;
	long l;
	long long ll;
	float f;

	printf("size of a character is: %ld byte(s)\n", sizeof(s));
	printf("size of an integer: %ld byte(s)\n", sizeof(n));
	printf("size of a long integer: %ld byte(s)\n", sizeof(l));
	printf("size of a long long integer: %ld byte(s)\n", sizeof(ll));
	printf("size of a floating number is: %ld byte(s)\n", sizeof(f));
	return (0);
}
