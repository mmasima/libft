/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:27:40 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/24 10:33:20 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t 		x;
	char		*dest;
	char		*srce;

	x = 0;
	dest = (char *)dst;
	srce = (char *)src;
	while (x < n)
	{
		dest[x] = srce[x];
		if((unsigned char)dest[x] = ((unsigned char)c);
				return ((char *)(dst + x + 1);
		x++;
	}
	return (NULL);
}
