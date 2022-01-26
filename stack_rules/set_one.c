/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_one.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:37:00 by ehosu             #+#    #+#             */
/*   Updated: 2022/01/26 13:42:01 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * sa : sb - swap the first 2 elements at the top of stack a or b.
 * Do nothing if there is only one or no elements.
*/
void	swap_first_2_elements(t_stack *stack, char chr)
{
	int	temp;

	temp = 0;
	if (node_size(stack->top) < 2)
		return ;
	temp = stack->top->value;
	stack->top->value = stack->top->prev->value;
	stack->top->prev->value = temp;
	if (chr == 'a')
		write(1, "sa\n", 3);
	else if (chr == 'b')
		write(1, "sb\n", 3);
}

/**
 * ss : sa and sb at the same time.
*/
void	swap_first_2_in_both(t_stack *stack_one, t_stack *stack_two)
{
	swap_first_2_elements(stack_one, '0');
	swap_first_2_elements(stack_two, '0');
	write(1, "ss\n", 3);
}

/**
 * pa : push a - take the first element at the top of b and put it at the top
 * of a. Do nothing if b is empty.
 * 
 * pb : push b - take the first element at the top of a and put it at the top
 * of b. Do nothing if a is empty.
*/
void	push_top_to_top(t_stack *stack_one, t_stack *stack_two, char chr)
{
	int temp;

	temp = 0;
	if (node_size(stack_two->top) == 0)
		return ;
	temp = stack_two->top->value;
	stack_pop_top(stack_two);
	stack_push_top(stack_one, temp);
	if (chr == 'a')
		write(1, "pa\n", 3);
	else
		write(1, "pb\n", 3);
}
