/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:24:22 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/11 13:37:05 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*new_str;

	new_str = (char *)str;
	while (*new_str)
	{
		if (*new_str == c)
			return (new_str);
		new_str++;
	}
	if (*new_str == c)
		return (new_str);
	return (NULL);
}
