/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 09:28:52 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/11 13:37:22 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if (!src || !dest)
		return (0);
	len = ft_strlen(src);
	i = 0;
	if (len == 0)
		dest[i] = src[i];
	while ((i < size - 1) && (size != 0) && (i < len))
	{
		dest[i] = src[i];
		i++;
	}
	if ((i > 0) && (len > 0))
		dest[i] = '\0';
	return (len);
}
