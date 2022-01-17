/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:41:10 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/11 13:37:18 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;
	size_t	result;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dest);
	if (size <= len_d)
		result = size + len_s;
	else
	{
		i = 0;
		while (i + len_d + 1 < size && *(src + i))
		{
			*(dest + len_d + i) = *(src + i);
			i++;
		}
		*(dest + len_d + i) = '\0';
		result = len_d + len_s;
	}
	return (result);
}
