/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:27:40 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/07 16:41:05 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*s;
	size_t	x;

	x = -1;
	s = dst;
	while (++x < n)
	{
		*(s + x) = *((unsigned char *)src + x);
		if (*((unsigned char *)src + x) == (unsigned char)c)
			return (dst + x + 1);
	}
	return (NULL);
}
