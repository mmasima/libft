/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:01:40 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/03 16:43:03 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
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
			while (needle[y] != '\0' && haystack[len + y] == needle[y])
				y++;
			if (needle[y] == '\0')
				return ((char*)&haystack[len]);
		}
		len++;
	}
	return (0);
}
