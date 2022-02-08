/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_amount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:04:29 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/07 15:49:59 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	sort_last_two(t_stack *stack)
{
	if (stack->top->value > stack->top->prev->value)
		swap_first_2_elements(stack, 'a');
}

void	sort_small_amaount(t_stack *stack)
{
	if ((stack->top->value > stack->top->prev->value) && \
		(stack->top->value < stack->bottom->value))
		swap_first_2_elements(stack, 'a');
	else if ((stack->top->value > stack->top->prev->value) && \
		(stack->top->value > stack->bottom->value))
	{
		if (stack->top->prev->value < stack->bottom->value)
		{
			rotate_first_with_last_element(stack, 'a');
			return ;
		}
		swap_first_2_elements(stack, 'a');
		rotate_last_with_first_element(stack, 'a');
	}
	else if ((stack->top->value < stack->top->prev->value) && \
		(stack->bottom->value > stack->top->value))
	{
		swap_first_2_elements(stack, 'a');
		rotate_first_with_last_element(stack, 'a');
	}
	else if (stack->bottom->value < stack->top->value)
		rotate_last_with_first_element(stack, 'a');
}

void	small_amount_checker(t_stack *stack)
{
	if (check_stack_a_sorted(stack))
		return ;
	if (node_size(stack->top) == 2)
		sort_last_two(stack);
	else
		sort_small_amaount(stack);
}
