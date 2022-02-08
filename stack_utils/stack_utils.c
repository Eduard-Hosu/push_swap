/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:05:31 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/07 19:16:29 by ehosu            ###   ########.fr       */
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
		if (ptr->prev == NULL)
			return (smallest_value);
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
		if (ptr->prev == NULL)
			return (biggest_value);
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

int	check_stack_b_sorted(t_stack *stack)
{
	t_node	*ptr;

	ptr = stack->bottom;
	while (ptr != NULL)
	{
		if (ptr->next == NULL)
			return (1);
		if (ptr->value > ptr->next->value)
			return (0);
		ptr = ptr->next;
	}
	return (1);
}

int	check_stack_a_sorted(t_stack *stack)
{
	t_node	*ptr;

	ptr = stack->top;
	while (ptr != NULL)
	{
		if (ptr->prev == NULL)
			return (1);
		if (ptr->value > ptr->prev->value || ptr->prev->index != ptr->index + 1)
			return (0);
		ptr = ptr->prev;
	}
	return (1);
}
