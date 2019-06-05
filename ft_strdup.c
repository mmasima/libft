/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:55:21 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/05 14:00:20 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		x;
	char	*s2;
	int		len;

	len = ft_strlen(s1);
	if (!(s2 = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s1[x])
	{
		s2[x] = s1[x];
		x += 1;
	}
	s2[x] = '\0';
	return (s2);
}
