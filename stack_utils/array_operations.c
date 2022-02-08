/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:56:37 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/03 10:00:10 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	swap(int *current, int *next)
{
	int	temp;

	temp = *current;
	*current = *next;
	*next = temp;
}

void	bubble_sort(int arr[], int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		j = 0;
		while (j < n - i)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}

int	*add_to_array(t_stack *stack)
{
	int i;
	int	*values;
	t_node	*ptr;

	i = 0;
	values = ft_calloc(node_size(stack->top), sizeof(int));
	ptr = stack->top;
	while (node_size(stack->top) > i)
	{
		values[i] = ptr->value;

		ptr = ptr->prev;
		i++;
	}
	// bubble_sort(values, i - 1);
	return (values);
}

int	*duplicate_array(int *imputs, int stack_length)
{
	int	i;
	int	*new_array;

	new_array = ft_calloc(stack_length, sizeof(int));
	i = 0;
	while (stack_length > i)
	{
		new_array[i] = imputs[i];
		i++;
	}
	return (new_array);
}

void	add_stack_sorted_index_values(int *imputs, t_stack *stack)
{
	int		i;
	t_node	*ptr;

	bubble_sort(imputs, node_size(stack->top) - 1);
	i = 0;
	while (i < node_size(stack->top))
	{
		ptr = stack->top;
		while (ptr != NULL)
		{
			if (ptr->value == imputs[i])
			{
				ptr->index = i;
				break ;
			}
			ptr = ptr->prev;
		}
		i++;
	}
	
	// i = 0;
	// while (i < stack_length)
	// {
	// 	j = 0;
	// 	while (j < stack_length)
	// 	{
	// 		if (imputs[i] == copy[j])
	// 		{
	// 			copy[j] = i;
	// 			break ;
	// 		}
	// 		j++;
	// 	}
	// 	i++;
	// }
	// return (copy);
}
