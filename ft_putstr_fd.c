/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:39:54 by mmasima           #+#    #+#             */
/*   Updated: 2019/05/27 11:03:55 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd);

void ft_putstr_fd(char const *s, int fd)
{
	int x;
	
	x = 0;
	while(s && s[x])
	{
		ft_putchar_fd(s[x], fd);
		x++;
	}
}

int main(void)
{
	int x = 0;
	char str[] = "hello";
	ft_putstr_fd(str, x);
	return (0);
}
