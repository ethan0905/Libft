/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:25:50 by esafar            #+#    #+#             */
/*   Updated: 2021/06/04 09:20:10 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*tab;

	i = 0;
	tab = (char *)s;
	while (i < n)
	{
		tab[i] = (char)c;
		i++;
	}
	return ((void *)s);
}