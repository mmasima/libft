/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                        +#+  +:+       +#+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:00:12 by obie              #+#    #+#             */
/*   Updated: 2019/06/09 18:04:12 by obie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*   ft_strnew(size_t size)
{
    char *str;

    str = (char*)malloc(size);
    if (str == NULL)
        return (NULL);
    ft_memset(str, (int)'\0',size + 1);
    return (str);
}
