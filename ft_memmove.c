/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguiglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:47:50 by yguiglio          #+#    #+#             */
/*   Updated: 2022/03/23 22:31:12 by yguiglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	i = -1;
	if (dest == 0 && src == 0)
		return (NULL);
	if (s1 > s2)
	{
		while (len > 0)
		{
			s1[len -1] = s2[len -1];
			len --;
		}
	}
	else
	{
		while (++i < len)
			s1[i] = s2[i];
	}
	return (dest);
}
