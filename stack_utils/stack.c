/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:13:11 by ehosu             #+#    #+#             */
/*   Updated: 2022/01/26 13:30:35 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Create node
*/
t_node	*create_node(int value)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

/**
 * Create stack
*/
t_stack *create_stack(void)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	stack->bottom = NULL;
	stack->top = NULL;
	return (stack);
}

/**
 * Destroy stack
*/
void	stack_destroy(t_stack *stack)
{
	while (stack != NULL && stack->bottom != NULL)
		stack_pop_bottom(stack);
	stack->bottom = NULL;
	stack->top = NULL;
	free(stack);
}


/**
 * Stack size
*/
int	node_size(t_node *node)
{
	int		count;
	t_node	*ptr;

	ptr = node;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->prev;
	}
	return (count);
}