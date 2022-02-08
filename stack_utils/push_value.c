/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_value.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:34:23 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/08 16:15:22 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_top_push_value(t_stack *stack_1, t_stack *stack_2, \
	int value, char *char_ar)
{
	t_node	*ptr;

	ptr = stack_1->top;
	while (ptr != NULL)
	{
		if (ptr->value == value)
		{
			push_top_to_top(stack_2, stack_1, char_ar[1]);
			break ;
		}
		else if (ptr->prev->value == value)
		{
			swap_first_2_elements(stack_1, char_ar[0]);
			push_top_to_top(stack_2, stack_1, char_ar[1]);
			break ;
		}
		rotate_first_with_last_element(stack_1, char_ar[0]);
		ptr = stack_1->top;
	}
}

void	check_bottom_push_value(t_stack *stack_1, t_stack *stack_2, \
	int value, char *char_ar)
{
	t_node	*ptr;

	ptr = stack_1->bottom;
	while (ptr != NULL)
	{
		if (ptr->value == value)
		{
			rotate_last_with_first_element(stack_1, char_ar[0]);
			push_top_to_top(stack_2, stack_1, char_ar[1]);
			break ;
		}
		rotate_last_with_first_element(stack_1, char_ar[0]);
		ptr = stack_1->bottom;
	}
}
