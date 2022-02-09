/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:35:37 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/09 16:42:20 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_last_two_in_b(t_stack *stack_b, t_stack *stack_a)
{
	if (node_size(stack_b->top) == 1)
	{
		push_top_to_top(stack_a, stack_b, 'a');
		return ;
	}
	if (stack_b->top->value < stack_b->top->prev->value)
		swap_first_2_elements(stack_b, 'b');
	push_top_to_top(stack_a, stack_b, 'a');
	push_top_to_top(stack_a, stack_b, 'a');
}

void	move_biggest_to_stack(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*ptr;
	int		half_size;
	int		max_value_position;
	char	char_ar[2];

	char_ar[0] = 'b';
	char_ar[1] = 'a';
	if (stack_b->top == NULL)
		return ;
	add_stack_sorted_index_values(add_to_array(stack_b), stack_b);
	ptr = stack_b->top;
	half_size = node_size(ptr) / 2;
	while (node_size(stack_b->top) > 2)
	{
		max_value_position = check_position(stack_b, biggest_number(stack_b));
		if (max_value_position <= half_size)
			check_top_push_value(stack_b, stack_a, \
				biggest_number(stack_b), char_ar);
		else
			check_bottom_push_value(stack_b, stack_a, \
				biggest_number(stack_b), char_ar);
		half_size = node_size(stack_b->top) / 2;
		ptr = stack_b->top;
	}
	sort_last_two_in_b(stack_b, stack_a);
}
