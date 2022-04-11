/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguiglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:07:50 by yguiglio          #+#    #+#             */
/*   Updated: 2022/03/30 15:19:03 by yguiglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = malloc((ft_strlen (s1) + 1) * sizeof(char));
	if (dst == 0)
		return (NULL);
	ft_strlcpy(dst, s1, (ft_strlen(s1) + 1));
	return (dst);
}
