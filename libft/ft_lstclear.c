/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 13:03:05 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/11 12:39:20 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*to_delete;

	ptr = *lst;
	to_delete = *lst;
	*lst = NULL;
	if (del != NULL)
	{
		while (ptr)
		{
			ptr = ptr->next;
			ft_lstdelone(to_delete, del);
			to_delete = ptr;
		}
	}
}
