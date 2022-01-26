/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:05:31 by ehosu             #+#    #+#             */
/*   Updated: 2022/01/26 19:25:01 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	smallest_number(t_stack *stack)
{
	int		smallest_value;
	t_node	*ptr;

	ptr = stack->top;
	smallest_value = ptr->value;
	while (ptr != NULL)
	{
		if (smallest_value > ptr->prev->value)
			smallest_value = ptr->prev->value;
		ptr = ptr->prev;
	}
	return (smallest_value);
}

int	biggest_number(t_stack *stack)
{
	int		biggest_value;
	t_node	*ptr;

	ptr = stack->top;
	biggest_value = ptr->value;
	while (ptr != NULL)
	{
		if (biggest_value < ptr->prev->value)
			biggest_value = ptr->prev->value;
		ptr = ptr->prev;
	}
	return (biggest_value);
}

int	check_position(t_stack *stack, int number)
{
	t_node	*ptr;
	int		i;

	i = 1;
	ptr = stack->top;
	while (ptr != NULL)
	{
		if (ptr->value == number)
			return (i);
		ptr = ptr->prev;
		i++;
	}
	return (0);
}
