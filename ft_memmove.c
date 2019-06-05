/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:45:04 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/05 14:15:09 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				x;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	x = 0;
	if (dst > src)
	{
		while (len--)
			ptr1 = ptr2;
	}
	else
	{
		while (x < len)
		{
			ptr1[x] = ptr2[x];
			x++;
		}
	}
	return (dst);
}
