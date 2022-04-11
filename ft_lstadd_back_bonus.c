/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguiglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:38:34 by yguiglio          #+#    #+#             */
/*   Updated: 2022/04/11 12:19:03 by yguiglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (lst == NULL)
		return ;
	if (lst[0] == NULL)
		lst[0] = new;
	else
	{
		ptr = lst[0];
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
}
