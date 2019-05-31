/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:35:47 by mmasima           #+#    #+#             */
/*   Updated: 2019/05/31 17:04:16 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;

	x = 0;
	while (dst[x] != '\0')
		x++;
	y = 0;
	while (src[y] !='\0' && y <= dstsize)
	{
		dst[x + y] =src[y];
		y++;
	}
	z = 0;
	while (src[z] != '\0')
		z++;
	return (x + dstsize);
}
int main()
{

   // Take any two strings
   char src[50] = "efghijkl";
   char dest[50]= "abcd";

   // Appends 5 character from src to dest
  ft_strlcat(dest, src, 5);

   // Prints the string
   printf("Source string : %s\n", src);
   printf("Destination string : %s", dest);

   return 0;
} 
