/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigger_amount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:45:54 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/09 17:19:33 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	chunk(int stack_size)
{
	if (stack_size < 50)
		return (stack_size / 2);
	else if (stack_size <= 101)
		return (stack_size / 4);
	else
		return (stack_size / 6);
}

int	first_or_second_half(t_stack *stack_a, t_stack *stack_b, int value, \
	int stack_size)
{
	char	char_ar[2];

	char_ar[0] = 'a';
	char_ar[1] = 'b';
	if (check_position(stack_a, value) <= stack_size)
	{
		check_top_push_value(stack_a, stack_b, value, char_ar);
		return (1);
	}
	else
	{
		check_bottom_push_value(stack_a, stack_b, value, char_ar);
		return (1);
	}
	return (0);
}

int	sorted(t_stack *stack_a, t_stack *stack_b, int chunk_border, int size)
{
	int		count;
	int		back_top;
	t_node	*ptr;

	count = 0;
	ptr = stack_a->top;
	while (count < chunk_border)
	{
		if (node_size(stack_a->top) < 4)
			return (0);
		back_top = 0;
		if (ptr->index < chunk_border)
		{
			back_top = first_or_second_half(stack_a, stack_b, ptr->value, size);
			count++;
			size = chunk(node_size(stack_a->top));
			if (check_stack_a_sorted(stack_a))
				return (1);
		}
		if (back_top)
			ptr = stack_a->top;
		else
			ptr = ptr->prev;
	}
	return (0);
}

void	sort_big_amaount(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*ptr;
	int		chunk_border;
	int		half_stack_size;

	ptr = stack_a->top;
	chunk_border = chunk(node_size(ptr));
	half_stack_size = node_size(ptr) / 2;
	while (node_size(stack_a->top) >= 4)
	{
		if (node_size(stack_a->top) == 4)
			first_or_second_half(stack_a, stack_b, \
				smallest_number(stack_a), half_stack_size);
		if (sorted(stack_a, stack_b, chunk_border, half_stack_size))
			break ;
		add_stack_sorted_index_values(add_to_array(stack_a), stack_a);
		chunk_border = chunk(node_size(stack_a->top));
	}
	small_amount_checker(stack_a);
}
