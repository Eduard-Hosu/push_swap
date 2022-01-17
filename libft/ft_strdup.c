/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:35:18 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/11 13:37:10 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	void	*dup;
	size_t	len;

	len = ft_strlen(string) + 1;
	dup = malloc(len);
	ft_memcpy(dup, string, len);
	return (dup);
}
