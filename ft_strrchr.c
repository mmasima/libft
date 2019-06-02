#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	unsigned char	k;

	len = 0;
	k = c;
	while (s[len] != '\0')
		len++;
	while (len >= 0)
	{
		if (s[len] == k)
			return (char*)(s + len);
		len--;
	}
	return (NULL);
}
