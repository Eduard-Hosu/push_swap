/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:15:03 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/11 13:37:45 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp_i;

	if (little[0] == '\0')
		return ((char *)(big));
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		temp_i = i;
		while (big[i] == little[j] && big[i] && i < len && little[j])
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i - j]);
		i = temp_i + 1;
	}
	return (NULL);
}
