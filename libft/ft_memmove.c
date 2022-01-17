/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 18:06:55 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/11 13:35:52 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t		i;
	char		*dest;
	char		*source;
	char		*temp;

	dest = (char *)str1;
	source = (char *)str2;
	temp = (char *)malloc(n + 1);
	i = 0;
	while (i < n)
	{
		temp[i] = source[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = temp[i];
		i++;
	}
	free(temp);
	return (str1);
}
