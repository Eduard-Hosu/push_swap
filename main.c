/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:56:37 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/11 13:27:25 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	destroy(t_stack *stack_a, t_stack *stack_b)
{
	stack_destroy(stack_a);
	stack_destroy(stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;

	a_stack = create_stack();
	b_stack = create_stack();
	if (argc < 2)
	{
		destroy(a_stack, b_stack);
		exit(EXIT_FAILURE);
	}
	handle_errors(argv);
	add_to_stack(a_stack, argv);
	add_stack_sorted_index_values(add_to_array(a_stack), a_stack);
	if (check_stack_a_sorted(a_stack))
	{
		destroy(a_stack, b_stack);
		exit(EXIT_SUCCESS);
	}
	sort_big_amaount(a_stack, b_stack);
	move_biggest_to_stack(a_stack, b_stack);
	destroy(a_stack, b_stack);
	return (0);
}
