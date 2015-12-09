/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nromptea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:42:50 by nromptea          #+#    #+#             */
/*   Updated: 2015/11/27 23:46:12 by nromptea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmpb;

	i = 0;
	tmpb = (unsigned char *)b;
	if (len == 0)
		return (b);
	while (i < len)
	{
		tmpb[i] = (unsigned char)c;
		i++;
	}
	return ((void *)tmpb);
}
