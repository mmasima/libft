/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:39:37 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/07 18:21:33 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t x;
	size_t y;

	x = 0;
	y = 0;
	while (little[y] != '\0')
		y++;
	if (y == 0)
		return (char*)(big);
	while (big[y] != '\0')
	{
		y = 0;
		while (big[x + y] == little[y] && little[y] != '\0')
			y++;
		if (little[y] == '\0')
		{
			if (x + y > len)
				break ;
			return (char*)(big + x);
		}
		x++;
	}
	return (NULL);
}
