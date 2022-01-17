/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:52:42 by ehosu             #+#    #+#             */
/*   Updated: 2021/06/04 15:52:45 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const s, char const *set_array)
{
	int	i;

	i = 0;
	while (set_array[i])
	{
		if (s == set_array[i])
			return (1);
		i++;
	}
	return (0);
}

static int	set_len(char const *str, char const *set)
{
	int	i;
	int	str_len;
	int	check;

	str_len = ft_strlen(str) - 1;
	i = 0;
	check = 1;
	while (str[i] && check)
	{
		if (!is_in_set(str[i], set))
			check = 0;
		else
			i++;
	}
	if (i == str_len + 1)
		return (0);
	while (is_in_set(str[str_len], set) && str_len > 0)
		str_len--;
	return (str_len - i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_trimed_len;
	char	*result;
	int		i;

	i = 0;
	s1_trimed_len = set_len(s1, set);
	result = (char *)malloc(s1_trimed_len + 1);
	if (result == NULL)
		return (NULL);
	if (s1_trimed_len > 0)
	{
		while (is_in_set(s1[i], set) && s1[i])
			i++;
		ft_memcpy(result, s1 + i, s1_trimed_len);
	}
	result[s1_trimed_len] = '\0';
	return (result);
}
