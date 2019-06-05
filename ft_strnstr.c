/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:39:37 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/05 14:56:50 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t len;
	size_t x;

	len = 0;
	x = 0;
	if (needle[0] == '\0' || needle == NULL)
		return ((char*)haystack);
	while (haystack[len] != '\0' && len < n)
	{
		x = 0;
		while (needle[x] == haystack[len + x] && len + x < n)
		{
			if (needle[len + x] == '\0')
			{
				return ((char*)haystack + len);
			}
			x++;
		}
		len++;
	}
	return (NULL);
}
