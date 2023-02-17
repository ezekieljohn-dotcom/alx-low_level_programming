#include <stdio.h>
/*
 *  main -print out sizes of data types in c 
 *  Return:0
 *  using ezzy tech hub
 **/
int main(void)
{
	char a;
	int b;
	long c;
	long int d;
	long long int e;
	float f;

	printf("Size of a char: %lu bytes(S)\n", (unsigned long)sizeof(a));
	printf("size of a int: %lu bytes(S)\n", (unsigned long)sizeof(b));
	printf("size of a long: %lu bytes(S)\n", (unsigned long)sizeof(c));
	printf("size of a long int: %lu bytes(S)\n", (unsigned long)sizeof(d));
	printf("size of a long long int: %lu bytes(S)\n", (unsigned long)sizeof(e));
	printf("size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));
	return (0);
}
