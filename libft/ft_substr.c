/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:10:52 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/11 13:37:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	to_copy;
	size_t	array_l;
	char	*substr;

	array_l = ft_strlen(s);
	if ((size_t)start > array_l)
		return (ft_strdup(""));
	to_copy = array_l - (size_t)start;
	if (len < to_copy)
	{
		to_copy = len;
	}
	substr = (char *)malloc(to_copy + 1);
	if (substr == 0)
		return (NULL);
	ft_memcpy(substr, s + start, to_copy);
	substr[to_copy] = '\0';
	return (substr);
}
