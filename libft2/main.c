
#include <stdio.h>
#include <string.h>
#include "libft.h"


int main()
{
	char *src = "Hello world!"
	char *dest = src;

	printf("src: %p; dest: %p\n", src, dest);
	for (size_t i=0; i<4; i++)
		printf("%d; ", *(ptr+i));
	ft_memmove(ptr, array, sizeof(array));
	printf("\nafter\n");
	for (size_t i=0; i<4; i++)
		printf("%d; ", *(ptr+i));

    return 0;
}

