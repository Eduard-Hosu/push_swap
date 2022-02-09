/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:56:37 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/09 17:44:08 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;

	a_stack = create_stack();
	b_stack = create_stack();
	if (argc < 2)
	{
		stack_destroy(a_stack);
		stack_destroy(b_stack);
		exit(EXIT_FAILURE);
	}
	handle_errors(argv);
	add_to_stack(a_stack, argv);
	add_stack_sorted_index_values(add_to_array(a_stack), a_stack);
	if (check_stack_a_sorted(a_stack))
	{
		stack_destroy(a_stack);
		stack_destroy(b_stack);
		exit(EXIT_SUCCESS);
	}
	sort_big_amaount(a_stack, b_stack);
	move_biggest_to_stack(a_stack, b_stack);
	stack_destroy(a_stack);
	stack_destroy(b_stack);
	return (0);
}
