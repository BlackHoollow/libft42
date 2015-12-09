/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nromptea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 23:56:45 by nromptea          #+#    #+#             */
/*   Updated: 2015/12/09 18:56:06 by nromptea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*strnew;

	if (!(strnew = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_bzero(strnew, size);
	return (strnew);
}
