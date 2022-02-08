/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_two.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:42:21 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/03 10:35:29 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * ra : rotate a - shift up all elements of stack a by 1.
 * The first element becomes the last one.
 * 
 * rb : rotate b - shift up all elements of stack b by 1.
 * The first element becomes the last one.
*/
void	rotate_first_with_last_element(t_stack *stack, char chr)
{
	int	temp_value;
	int	temp_index;

	temp_value = 0;
	temp_index = 0;
	temp_value = stack->top->value;
	temp_index = stack->top->index;
	stack_pop_top(stack);
	stack_push_bottom(stack, temp_value, temp_index);
	if (chr == 'a')
		write(1, "ra\n", 3);
	else if (chr == 'b')
		write(1, "rb\n", 3);
}

/**
 * rr : ra and rb at the same time.
*/
void	rotate_a_rotate_b(t_stack *first_stack, t_stack *second_stack)
{
	rotate_first_with_last_element(first_stack, '0');
	rotate_first_with_last_element(second_stack, '0');
	write(1, "rr\n", 3);
}

/**
 * rra : reverse rotate a - shift down all elements of stack a by 1.
 * The last element becomes the first one.
 * 
 * rrb : reverse rotate b - shift down all elements of stack b by 1.
 * The last element becomes the first one.
*/
void	rotate_last_with_first_element(t_stack *stack, char chr)
{
	int	temp_value;
	int	temp_index;

	temp_value = 0;
	temp_index = 0;
	temp_value = stack->bottom->value;
	temp_index = stack->bottom->index;
	stack_pop_bottom(stack);
	stack_push_top(stack, temp_value, temp_index);
	if (chr == 'a')
		write(1, "rra\n", 4);
	else if (chr == 'b')
		write(1, "rrb\n", 4);
}

/**
 * rrr : rra and rrb at the same time.
*/
void	reverse_rotate_a_and_b(t_stack *first_stack, t_stack *second_stack)
{
	rotate_last_with_first_element(first_stack, '0');
	rotate_last_with_first_element(second_stack, '0');
	write(1, "rrr\n", 4);
}
