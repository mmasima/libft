/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:15:27 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/14 11:16:45 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	z;
	char			*str;

	y = 0;
	x = 0;
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
		x++;
	if (s[x] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	y = ft_strlen(s) - 1;
	while (s[y] == ' ' || s[y] == '\n' || s[y] == '\t')
		y--;
	str = (char *)malloc(sizeof(char) * (y - x + 2));
	if (str == NULL)
		return (NULL);
	z = 0;
	while (z < y - x + 1)
	{
		str[z] = s[x + z];
		z++;
	}
	str[z] = '\0';
	return (str);
}