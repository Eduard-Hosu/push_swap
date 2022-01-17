/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:21:29 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/11 13:36:58 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	how_many_strings(char const *s, char c)
{
	int		i;
	int		strings;

	i = 0;
	strings = 1;
	if (s[0] == c || ft_strlen(s) == 0)
		strings = 0;
	while (s[i])
	{
		if ((s[i] == c) && (s[i] != '\0')
			&& (s[i + 1] != c) && (s[i + 1] != '\0'))
			strings++;
		i++;
	}
	return (strings);
}

static char	**add_substrings(char **arr, int result_len, char const *s, char c)
{
	int	i;
	int	x;
	int	y;

	y = 0;
	i = 0;
	while (i < result_len)
	{
		x = 0;
		while (s[y + x] == c)
			y++;
		while (s[y + x] != c && s[y + x] != '\0')
			x++;
		if (x)
			*(arr + i) = ft_substr(s, y, x);
		y += x + 1;
		i++;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		result_len;

	result_len = how_many_strings(s, c);
	result = (char **)(ft_calloc((result_len + 1), sizeof(char *)));
	if (result == NULL)
		return (NULL);
	result = add_substrings(result, result_len, s, c);
	return (result);
}
