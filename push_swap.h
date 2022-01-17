/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:54:05 by ehosu             #+#    #+#             */
/*   Updated: 2022/01/17 16:00:06 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*bottom;
	t_node	*top;
}	t_stack;


t_node	*create_node(int value);
t_stack	*create_stack(void);
int		stack_push_top(t_stack *stack, int value);
int		stack_push_bottom(t_stack *stack, int value);
void	swap_first_2_elements(t_stack *stack, char chr);
void	swap_first_2_in_both(t_stack *stack_one, t_stack *stack_two);
void	push_top_to_top(t_stack *stack_one, t_stack *stack_two, char chr);
void	rotate_first_with_last_element(t_stack *stack, char chr);
void	rotate_a_rotate_b(t_stack *first_stack, t_stack *second_stack);
void	rotate_last_with_first_element(t_stack *stack, char chr);
void	reverse_rotate_a_and_b(t_stack *first_stack, t_stack *second_stack);

#endif
