/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 18:49:54 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/11 13:37:48 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		len;

	len = ft_strlen(str);
	s = (char *)str;
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return (&s[len]);
		len--;
	}
	return (NULL);
}
