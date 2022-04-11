/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguiglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 01:38:40 by yguiglio          #+#    #+#             */
/*   Updated: 2022/03/24 01:52:47 by yguiglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (dest[i] == src[i] && i < (n - 1))
		i++;
	return (dest[i] - src[i]);
}
