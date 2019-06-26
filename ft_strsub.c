/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 11:17:02 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/26 17:25:30 by obie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(const char *s, unsigned int start, size_t len)
{
	unsigned int	x;
	char			*str;

	if (!s)
		return (0);
	x = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (x < len)
	{
		str[x] = s[start + x];
		x++;
	}
	str[x] = '\0';
	return (str);
}
