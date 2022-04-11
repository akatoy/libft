/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguiglio <yguiglio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:42:14 by yguiglio          #+#    #+#             */
/*   Updated: 2022/04/11 11:34:31 by yguiglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t len)
{
	char	*str;

	if (count && ((size_t) - 1) / count < len)
		return (NULL);
	str = malloc(sizeof(char) * (count * len));
	if (str == NULL)
		return (str);
	ft_memset(str, 0, count * len);
	return (str);
}
