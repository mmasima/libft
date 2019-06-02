#include "libft.h"
#include <stdio.h>


char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int len;
	unsigned int x;
	
	if (needle[0] == '\0')
		return ((char *)haystack);
	while(haystack[len] != '\0' && (size_t)len < n)
	{
		if(haystack[len] == needle[0])
		{
			x = 1;
			while (needle[x] != '\0' && needle[len + x] == needle[x] && (size_t)(len + x) < n)
					++x;
			if (needle[x] == '\0')
				return ((char*)&haystack[len]);
		}
		len++;
	}
	return (0);
}

int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   unsigned int q = 2;
   char *ret;

   ret = ft_strnstr(haystack, needle, q);

   printf("The substring is: %s\n", ret);

   return(0);
}
