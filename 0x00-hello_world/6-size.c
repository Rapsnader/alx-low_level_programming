#include <stdio.h>

/**
* main - print the string the size of various types
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

	printf("size of a char: %ld byte(s)\n", sizeof(s));
	printf("size of an int: %ld byte(s)\n", sizeof(n));
	printf("size of a long int: %ld byte(s)\n", sizeof(l));
	printf("size of a long long int: %ld byte(s)\n", sizeof(ll));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
