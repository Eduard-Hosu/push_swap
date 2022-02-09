/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_argv_errors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:48:53 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/09 14:34:34 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	contains_char(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]))
			return (1);
		i++;
	}
	return (0);
}

void	check_for_non_numeric_values(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (contains_char(argv[i]))
		{
			write(1, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		if ((ft_atoi(argv[i]) == 0) && (ft_strncmp(argv[i], "0", 1) != 0))
		{
			write(1, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

void	check_range(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if ((ft_atol(argv[i]) > INT_MAX) || (ft_atol(argv[i]) < INT_MIN))
		{
			write(1, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

void	check_for_duplicate(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 2;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]) && (i != j))
			{
				write(1, "Error\n", 6);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

void	handle_errors(char **argv)
{
	check_for_non_numeric_values(argv);
	check_range(argv);
	check_for_duplicate(argv);
}
