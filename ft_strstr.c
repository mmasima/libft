/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:01:40 by mmasima           #+#    #+#             */
/*   Updated: 2019/05/30 15:40:09 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char *ft_strstr( char *haystack,  char *needle)
{
	int len;
	int y;

	len = 0;
	y = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[len] != '\0')
	{
		if (haystack[len] == needle[0])
		{
			y = 1;
			while ( needle[y] != '\0' && haystack[len + y] == needle[y])
				y++;
			if(needle[y] == '\0')
				return ((char*)&haystack[len]);

		}
		len++;
	}
	return (0);
}

int main()
{
    // Take any two strings
    char s1[] = "GeeksforGeeks";
    char s2[] = "e";
    char *p;

    // Find first occurence of s2 in s1
    p = ft_strstr(s1, s2);

    // Prints the result
    if (p) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
    } else
        printf("String not found\n");

    return 0;
}
