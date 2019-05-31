/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 12:20:43 by mmasima           #+#    #+#             */
/*   Updated: 2019/05/31 12:56:27 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int x;
	int y;

	y = 0;
	x = 0;
	while (s1[x] != '\0')
			 x++;
	while(s2[y] != '\0')
	{
		s1[x] = s2[y];
		y++;
	}
	s1[x] = '\0';
	return (s1);
}
int main()
{
   char str1[] = "This is ";
   char	str2[] = "programiz.com";

	ft_strcat(str1,str2);

    printf("%s\n",str1);    
    printf("%s\n",str2);
    return (0);
}
