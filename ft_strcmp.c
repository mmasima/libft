/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:32:59 by mmasima           #+#    #+#             */
/*   Updated: 2019/05/21 17:02:41 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s2 != '\0' &&*s1 != '\0' && *s2 == *s1)
	{
		++*s1;
		++*s2;
	}
	return (*s1 - *s2);
}
int main()
{
	char str[] = "hello";
	char str1[] = "hello";
	
	ft_putchar(ft_strcmp(str, str1));
	return (0);
}
	
