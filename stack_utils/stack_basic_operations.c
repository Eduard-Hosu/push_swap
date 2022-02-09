/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_basic_operations.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:20:23 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/09 16:52:45 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_push_top(t_stack *stack, int value, int index)
{
	t_node	*node;

	node = create_node(value, index);
	node->prev = stack->top;
	stack->top = node;
	if (!node->prev)
	{
		if (stack->bottom != NULL)
			return (-1);
		stack->bottom = node;
	}
	else
		node->prev->next = node;
	return (0);
}

int	stack_push_bottom(t_stack *stack, int value, int index)
{
	t_node	*node;

	node = create_node(value, index);
	if (!node)
		return (-1);
	node->next = stack->bottom;
	stack->bottom = node;
	if (!node->next)
	{
		if (stack->top != NULL)
			return (-1);
		stack->top = node;
	}
	else
		node->next->prev = node;
	return (0);
}

int	stack_pop_top(t_stack *stack)
{
	t_node	*temp;

	if (stack->top == NULL)
		return (-1);
	if (stack->top->next == NULL && stack->top->prev == NULL)
	{
		temp = stack->top;
		stack->top = NULL;
		stack->bottom = NULL;
		free(temp);
		return (0);
	}
	temp = stack->top;
	stack->top = stack->top->prev;
	stack->top->next = NULL;
	free(temp);
	return (0);
}

int	stack_pop_bottom(t_stack *stack)
{
	t_node	*temp;

	if (stack->bottom == NULL)
		return (-1);
	if (stack->bottom->next == NULL && stack->bottom->prev == NULL)
	{
		temp = stack->bottom;
		stack->bottom = NULL;
		stack->top = NULL;
		free(temp);
		return (0);
	}
	temp = stack->bottom;
	stack->bottom = stack->bottom->next;
	stack->bottom->prev = NULL;
	free(temp);
	return (0);
}

void	add_to_stack(t_stack *stack, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		stack_push_bottom(stack, ft_atoi(argv[i]), -1);
		i++;
	}
}
