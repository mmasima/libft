#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char *s1;
	const unsigned char *s2;

	s1 = str1;
	s2 = str2;

	while (n--)
	{
		if (*s1 != *s2)
			return ((unsigned int )*s1 - (unsigned int)*s2);
		else
		{
			s1++;
			s2++;
		}
	}
	return (0);
}
