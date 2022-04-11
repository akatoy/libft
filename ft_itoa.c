/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguiglio <yguiglio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:49:36 by yguiglio          #+#    #+#             */
/*   Updated: 2022/04/11 15:33:00 by yguiglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_int_size(int n)
{
	size_t	s;

	if (n == 0)
		return (1);
	s = 0;
	if (n < 0)
	{
		if (n == INT_MIN)
			n += 1;
		n *= -1;
		s++;
	}
	while (n > 0)
	{
		n /= 10;
		s++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char		*ret;
	long long	nbr;
	size_t		i;

	nbr = n;
	i = get_int_size(n);
	ret = malloc(i + 1);
	if (ret == NULL)
		return (NULL);
	ret[i] = 0;
	if (nbr < 0)
	{
		ret[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		ret[0] = '0';
	while (nbr > 0)
	{
		i--;
		ret[i] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (ret);
}
