/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:22:14 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/20 14:47:39 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numb_length(unsigned long numb)
{
	int	length;

	if (numb == 0)
		return (1);
	length = 0;
	while (numb != 0)
	{
		numb = numb / 10;
		length++;
	}
	return (length);
}

void	make_string(char *result, long int n, int len, int is_negativ)
{	
	result[len] = '\0';
	len--;
	while (len >= 0)
	{
		result[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (is_negativ)
		result[0] = '-';
}

char	*ft_itoa(int n)
{
	char		*result;
	int			is_negative;
	int			n_length;
	int long	new_n;

	new_n = n;
	is_negative = 0;
	if (new_n < 0)
	{
		is_negative = 1;
		new_n *= -1;
	}
	n_length = numb_length(new_n);
	if (is_negative)
		n_length++;
	result = (char *)ft_calloc((n_length + 1), sizeof(char));
	if (result == NULL)
		return (NULL);
	make_string(result, new_n, n_length, is_negative);
	return (result);
}
