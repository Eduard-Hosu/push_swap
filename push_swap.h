/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:54:05 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/09 16:43:26 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*bottom;
	t_node	*top;
}	t_stack;

t_node	*create_node(int value, int index);
t_stack	*create_stack(void);
void	stack_destroy(t_stack *stack);
int		stack_push_top(t_stack *stack, int value, int index);
int		stack_push_bottom(t_stack *stack, int value, int index);
int		stack_pop_top(t_stack *stack);
int		stack_pop_bottom(t_stack *stack);
int		node_size(t_node *node);
void	swap_first_2_elements(t_stack *stack, char chr);
void	swap_first_2_in_both(t_stack *stack_one, t_stack *stack_two);
void	push_top_to_top(t_stack *stack_one, t_stack *stack_two, char chr);
void	rotate_first_with_last_element(t_stack *stack, char chr);
void	rotate_a_rotate_b(t_stack *first_stack, t_stack *second_stack);
void	rotate_last_with_first_element(t_stack *stack, char chr);
void	reverse_rotate_a_and_b(t_stack *first_stack, t_stack *second_stack);
void	handle_errors(char **argv);
void	check_for_non_numeric_values(char **argv);
void	check_range(char **argv);
void	check_for_duplicate(char **argv);
void	add_to_stack(t_stack *stack, char **argv);
int		*add_to_array(t_stack *stack);
void	bubble_sort(int arr[], int n);
void	add_stack_sorted_index_values(int *imputs, t_stack *stack);
int		smallest_number(t_stack *stack);
int		biggest_number(t_stack *stack);
int		check_position(t_stack *stack, int number);
void	sort_small_amaount(t_stack *stack);
void	small_amount_checker(t_stack *stack);
void	check_top_push_value(t_stack *stack_1, t_stack *stack_2, \
		int value, char *char_ar);
void	check_bottom_push_value(t_stack *stack_1, t_stack *stack_2, \
		int value, char *char_ar);
int		check_stack_a_sorted(t_stack *stack);
int		check_stack_b_sorted(t_stack *stack);
void	sort_big_amaount(t_stack *stack_a, t_stack *stack_b);
void	move_biggest_to_stack(t_stack *stack_a, t_stack *stack_b);

#endif
