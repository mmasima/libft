/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:22:43 by mmasima           #+#    #+#             */
/*   Updated: 2019/05/27 14:24:18 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	x;
	char	*ptr;

	ptr = b;
	x = 0;
	while (x < len)
		*(ptr + x++) = c;
	return (b);
}
