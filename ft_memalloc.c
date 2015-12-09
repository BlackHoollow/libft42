/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nromptea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 00:01:41 by nromptea          #+#    #+#             */
/*   Updated: 2015/12/01 18:19:54 by nromptea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memnew;

	if (size >= 1)
	{
		if (!(memnew = (void *)malloc(sizeof(void) * size)))
		{
			memnew = NULL;
			return (memnew);
		}
		while (size--)
			ft_bzero(memnew, size);
	}
	else
		memnew = NULL;
	return (memnew);
}
