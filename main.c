#include <stdio.h>
#include "libft.h"

int main(void)
{
	char c = 'a';
	// printf("char = ");
	printf("%c", c);
	int test = ft_isalnum(c);

	printf("%d", test);
}
