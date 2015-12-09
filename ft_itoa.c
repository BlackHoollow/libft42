/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nromptea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:33:20 by nromptea          #+#    #+#             */
/*   Updated: 2015/12/04 21:05:55 by nromptea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*itoa_rec(long long n, char *res)
{
	if (n > 9)
		res = itoa_rec(n / 10, res);
	*res = "0123456789"[n % 10];
	*(res + 1) = '\0';
	return (res + 1);
}

char		*ft_itoa(int n)
{
	char		*res;
	int			nb;
	int			nbch;
	long long	tmp;
	int			i;

	nb = n;
	nbch = 1;
	i = 0;
	tmp = n;
	while (nb >= 10)
	{
		nb = nb / 10;
		nbch++;
	}
	if (!(res = (char *)malloc(sizeof(char) * nbch + 1)))
		return (NULL);
	if (tmp < 0)
	{
		res[i] = '-';
		i++;
		tmp = -tmp;
	}
	itoa_rec(tmp, res + i);
	return (res);
}
