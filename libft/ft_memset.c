/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:41:45 by ehosu             #+#    #+#             */
/*   Updated: 2021/05/21 16:20:40 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, int len)
{
	unsigned char	*p;

	p = str;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (str);
}
