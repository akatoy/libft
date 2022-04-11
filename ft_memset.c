/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguiglio <yguiglio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:14:35 by yguiglio          #+#    #+#             */
/*   Updated: 2022/04/07 19:08:33 by yguiglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		n--;
		*str = (unsigned char)c;
		str++;
	}
	return (s);
}*/

void	*ft_memset(void *ptr, int value, size_t len)
{
	size_t			i;
	unsigned char	*pointeur;

	i = 0;
	pointeur = (unsigned char *)ptr;
	while (len > i)
		pointeur[i++] = (unsigned char)value;
	return (ptr);
}
