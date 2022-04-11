/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguiglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:13:35 by yguiglio          #+#    #+#             */
/*   Updated: 2022/03/29 17:22:47 by yguiglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *)dest;
	if (dest == 0 && src == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		s1[i] = *(unsigned char *)src;
		src++;
		i++;
	}
	return (dest);
}
