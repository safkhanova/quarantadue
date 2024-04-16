#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum(int count, ...)
{
	va_list args;
	va_start(args, count);
	int i;
	for (int i = 0; i<count; i++)
	{
		int x = va_args(args, int);
	}
}

int main()
{
	printf("the sum: %d\n", sum(1,2,3));
	return (0);
}