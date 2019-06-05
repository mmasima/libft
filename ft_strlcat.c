/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:35:47 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/05 15:02:15 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;

	x = 0;
	while (dst[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0' && y <= dstsize)
	{
		dst[x + y] = src[y];
		y++;
	}
	z = 0;
	while (src[z] != '\0')
		z++;
	return (x + dstsize);
}
