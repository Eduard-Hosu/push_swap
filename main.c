/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:56:37 by ehosu             #+#    #+#             */
/*   Updated: 2022/01/26 19:28:34 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/**
 * Create node
*/
// t_node	*create_node(int value)
// {
// 	t_node *node;

// 	node = malloc(sizeof(t_node));
// 	if (!node)
// 		return (NULL);
// 	node->value = value;
// 	node->prev = NULL;
// 	node->next = NULL;
// 	return (node);
// }

/**
 * Create stack
*/
// t_stack *create_stack(void)
// {
// 	t_stack *stack;

// 	stack = malloc(sizeof(t_stack));
// 	stack->bottom = NULL;
// 	stack->top = NULL;
// 	return (stack);
// }

// int	stack_push_top(t_stack *stack, int value)
// {
// 	t_node *node;

// 	node = create_node(value);
// 	node->prev = stack->top;
// 	stack->top = node;
// 	if (!node->prev) 
// 	{
// 		if (stack->bottom != NULL)
// 			return (-1);
// 		stack->bottom = node;
// 	}
// 	else
// 		node->prev->next = node;
// 	return (0);
// }

// int	stack_push_bottom(t_stack *stack, int value)
// {
// 	t_node	*node;

// 	node = create_node(value);
// 	if (!node)
// 		return (-1);
// 	node->next = stack->bottom;
// 	stack->bottom = node;
// 	if (!node->next)
// 	{
// 		if (stack->top != NULL)
// 			return (-1);
// 		stack->top = node;
// 	}
// 	else
// 		node->next->prev = node;
// 	return (0);
// }

// int	stack_pop_top(t_stack *stack)
// {
// 	t_node	*temp;

// 	if (stack->top == NULL)
// 		return (-1);
// 	if (stack->top->next == NULL && stack->top->prev == NULL)
// 	{
// 		temp = stack->top;
// 		stack->top = NULL;
// 		stack->bottom = NULL;
// 		free(temp);
// 	}
// 	temp = stack->top;
// 	stack->top = stack->top->prev;
// 	stack->top->next = NULL;
// 	free(temp);
// 	return (0);
// }

// int	stack_pop_bottom(t_stack *stack)
// {
// 	t_node *temp;

// 	if (stack->bottom == NULL)
// 		return (-1);
// 	if (stack->bottom->next == NULL && stack->bottom->prev == NULL)
// 	{
// 		temp = stack->bottom;
// 		stack->bottom = NULL;
// 		stack->top = NULL;
// 		free(temp);
// 		return (0);
// 	}
// 	temp = stack->bottom;
// 	stack->bottom = stack->bottom->next;
// 	stack->bottom->prev = NULL;
// 	free(temp);
// 	return (0);
// }

// int	node_size(t_node *node)
// {
// 	int		count;
// 	t_node	*ptr;

// 	ptr = node;
// 	count = 0;
// 	while (ptr != NULL)
// 	{
// 		count++;
// 		ptr = ptr->prev;
// 	}
// 	return (count);
// }

// /**
//  * sa : sb - swap the first 2 elements at the top of stack a or b.
//  * Do nothing if there is only one or no elements.
// */
// void	swap_first_2_elements(t_stack *stack, char chr)
// {
// 	int	temp;

// 	temp = 0;
// 	if (node_size(stack->top) < 2)
// 		return ;
// 	temp = stack->top->value;
// 	stack->top->value = stack->top->prev->value;
// 	stack->top->prev->value = temp;
// 	if (chr == 'a')
// 		write(1, "sa\n", 3);
// 	else if (chr == 'b')
// 		write(1, "sb\n", 3);
// }

// /**
//  * ss : sa and sb at the same time.
// */
// void	swap_first_2_in_both(t_stack *stack_one, t_stack *stack_two)
// {
// 	swap_first_2_elements(stack_one, '0');
// 	swap_first_2_elements(stack_two, '0');
// 	write(1, "ss\n", 3);
// }

// /**
//  * pa : push a - take the first element at the top of b and put it at the top
//  * of a. Do nothing if b is empty.
//  * 
//  * pb : push b - take the first element at the top of a and put it at the top
//  * of b. Do nothing if a is empty.
// */
// void	push_top_to_top(t_stack *stack_one, t_stack *stack_two, char chr)
// {
// 	int temp;

// 	temp = 0;
// 	if (node_size(stack_two->top) == 0)
// 		return ;
// 	temp = stack_two->top->value;
// 	stack_pop_top(stack_two);
// 	stack_push_top(stack_one, temp);
// 	if (chr == 'a')
// 		write(1, "pa\n", 3);
// 	else
// 		write(1, "pb\n", 3);
// }

// /**
//  * ra : rotate a - shift up all elements of stack a by 1.
//  * The first element becomes the last one.
//  * 
//  * rb : rotate b - shift up all elements of stack b by 1.
//  * The first element becomes the last one.
// */
// void	rotate_first_with_last_element(t_stack *stack, char chr)
// {
// 	int temp;

// 	temp = 0;
// 	temp = stack->top->value;
// 	stack_pop_top(stack);
// 	stack_push_bottom(stack, temp);
// 	if (chr == 'a')
// 		write(1, "ra\n", 3);
// 	else if (chr == 'b')
// 		write(1, "rb\n", 3);
// }

// /**
//  * rr : ra and rb at the same time.
// */
// void	rotate_a_rotate_b(t_stack *first_stack, t_stack *second_stack)
// {
// 	rotate_first_with_last_element(first_stack, '0');
// 	rotate_first_with_last_element(second_stack, '0');
// 	write(1, "rr\n", 3);
// }

// /**
//  * rra : reverse rotate a - shift down all elements of stack a by 1.
//  * The last element becomes the first one.
//  * 
//  * rrb : reverse rotate b - shift down all elements of stack b by 1.
//  * The last element becomes the first one.
// */
// void	rotate_last_with_first_element(t_stack *stack, char chr)
// {
// 	int temp;

// 	temp = 0;
// 	temp = stack->bottom->value;
// 	stack_pop_bottom(stack);
// 	stack_push_top(stack, temp);
// 	if (chr == 'a')
// 		write(1, "ra\n", 3);
// 	else if (chr == 'b')
// 		write(1, "rb\n", 3);
// }

// /**
//  * rrr : rra and rrb at the same time.
// */
// void	reverse_rotate_a_and_b(t_stack *first_stack, t_stack *second_stack)
// {
// 	rotate_last_with_first_element(first_stack, '0');
// 	rotate_last_with_first_element(second_stack, '0');
// 	write(1, "rrr\n", 4);
// }

// void	stack_destroy(t_stack *stack)
// {
// 	while (stack != NULL && stack->bottom != NULL)
// 		stack_pop_bottom(stack);
// 	stack->bottom = NULL;
// 	stack->top = NULL;
// 	free(stack);
// }

// void	check_for_non_numeric_values(char **argv)
// {
// 	int i;

// 	i = 1;
// 	while (argv[i])
// 	{
// 		if ((ft_atoi(argv[i]) == 0) && (ft_strncmp(argv[i], "0", 1) != 0))
// 		{
// 			write(1, "Error\n", 6);
// 			exit(EXIT_FAILURE);
// 		}
// 		i++;
// 	}
// }

// void	check_range(char **argv)
// {
// 	int i;

// 	i = 1;
// 	while (argv[i])
// 	{
// 		if ((ft_atol(argv[i]) > INT_MAX) || (ft_atol(argv[i]) < INT_MIN))
// 		{
// 			write(1, "Error\n", 6);
// 			exit(EXIT_FAILURE);
// 		}
// 		i++;
// 	}
// }

// void	check_for_duplicate(char **argv)
// {
// 	int i;
// 	int j;

// 	i = 1;
// 	while (argv[i])
// 	{
// 		j = 2;
// 		while (argv[j])
// 		{
// 			if (ft_atoi(argv[i]) == ft_atoi(argv[j]) && (i != j))
// 			{
// 				write(1, "Error\n", 6);
// 				exit(EXIT_FAILURE);
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// }

// void	handle_errors(char **argv)
// {
// 	check_for_non_numeric_values(argv);
// 	check_range(argv);
// 	check_for_duplicate(argv);
// }

// void	add_to_stack(t_stack *stack, char **argv)
// {
// 	int i;

// 	i = 1;
// 	while (argv[i])
// 	{
// 		stack_push_bottom(stack, ft_atoi(argv[i]));
// 		i++;
// 	}
// }

// void	swap(int *current, int *next)
// {
// 	int	temp;

// 	temp = *current;
// 	*current = *next;
// 	*next = temp;
// }

// void	bubble_sort(int arr[], int n)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (i < n)
// 	{
// 		j = 0;
// 		while (j < n - i)
// 		{
// 			if (arr[j] > arr[j + 1])
// 				swap(&arr[j], &arr[j + 1]);
// 			j++;
// 		}
// 		i++;
// 	}
// }

// int	smallest_number(t_stack *stack)
// {
// 	int		smallest_value;
// 	t_node	*ptr;

// 	ptr = stack->top;
// 	smallest_value = ptr->value;
// 	while (ptr->prev != NULL)
// 	{
// 		if (smallest_value > ptr->prev->value)
// 			smallest_value = ptr->prev->value;
// 		ptr = ptr->prev;
// 	}
// 	return (smallest_value);
// }

// int	biggest_number(t_stack *stack)
// {
// 	int		biggest_value;
// 	t_node	*ptr;

// 	ptr = stack->top;
// 	biggest_value = ptr->value;
// 	while (ptr->prev != NULL)
// 	{
// 		if (biggest_value < ptr->prev->value)
// 			biggest_value = ptr->prev->value;
// 		ptr = ptr->prev;
// 	}
// 	return (biggest_value);
// }

// int	check_position(t_stack *stack, int number)
// {
// 	t_node	*ptr;
// 	int		i;

// 	i = 1;
// 	ptr = stack->top;
// 	while (ptr != NULL)
// 	{
// 		if (ptr->value == number)
// 			return (i);
// 		ptr = ptr->prev;
// 		i++;
// 	}
// 	return (0);
// }

// int	*add_to_array(t_stack *stack)
// {
// 	int i;
// 	int	*values;
// 	t_node	*ptr;

// 	i = 0;
// 	values = ft_calloc(node_size(stack->top), sizeof(int));
// 	ptr = stack->top;
// 	while (node_size(stack->top) > i)
// 	{
// 		values[i] = ptr->value;

// 		ptr = ptr->prev;
// 		i++;
// 	}
// 	// bubble_sort(values, i - 1);
// 	return (values);
// }

// int	*duplicate_array(int *imputs, int stack_length)
// {
// 	int	i;
// 	int	*new_array;

// 	new_array = ft_calloc(stack_length, sizeof(int));
// 	i = 0;
// 	while (stack_length > i)
// 	{
// 		new_array[i] = imputs[i];
// 		i++;
// 	}
// 	return (new_array);
// }

// int	*convert_to_index_values(int *imputs, int stack_length)
// {
// 	int	*copy;
// 	int	i;
// 	int	j;

// 	copy = duplicate_array(imputs, stack_length);
// 	bubble_sort(imputs, stack_length - 1);
// 	i = 0;
// 	while (i < stack_length)
// 	{
// 		j = 0;
// 		while (j < stack_length)
// 		{
// 			if (imputs[i] == copy[j])
// 			{
// 				copy[j] = i;
// 				break ;
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (copy);
// }

int main(int argc, char **argv)
{
	t_node *ptr_a, *ptr_b;
	t_stack *a_stack;
	t_stack *b_stack;
	// int *arr_values;
	// int *arr_copy;
	// int test;

	a_stack = create_stack();
	b_stack = create_stack();
	
	if (argc < 2)
		exit(EXIT_FAILURE);
	handle_errors(argv);
	add_to_stack(a_stack, argv);
	// ptr_a = a_stack->top;
	// while (ptr_a != NULL)
	// {
	// 	printf("%d\n", ptr_a->value);
	// 	ptr_a = ptr_a->prev;
	// }
	// bubble_sort(values, i - 1);
	// arr_values = add_to_array(a_stack);
	// bubble_sort(arr_values, node_size(a_stack->top));
	// test = 0;
	// while (arr_values[test])
	// {
	// 	printf("%d ", arr_values[test]);
	// 	test++;
	// }
	// printf("new array\n");
	// arr_copy = convert_to_index_values(add_to_array(a_stack), node_size(a_stack->top));

	// test = 0;
	// while (test < node_size(a_stack->top))
	// {
	// 	printf("%d ", arr_copy[test]);
	// 	test++;
	// }
	// printf("\n%d\n", smallest_number(a_stack));
	// printf("%d\n", biggest_number(a_stack));
	// printf("%d\n", check_position(a_stack, smallest_number(a_stack)));
	// printf("%d\n", check_position(a_stack, biggest_number(a_stack)));
	// printf("something it's wrong");
	// exit(EXIT_SUCCESS);
	add_stack_sorted_index_values(add_to_array(a_stack), a_stack);
	ptr_a = a_stack->top;
	while (ptr_a != NULL)
	{
		printf("%d\n", ptr_a->value);
		ptr_a = ptr_a->prev;
	}
	exit(EXIT_SUCCESS);
	// swap_first_2_elements(a_stack, 'a');
	// ptr_a = a_stack->top;
	// while (ptr_a != NULL)
	// {
	// 	printf("%d\n", ptr_a->value);
	// 	ptr_a = ptr_a->prev;
	// }
	printf("stack b\n");
	ptr_b = b_stack->top;
	while (ptr_b != NULL)
	{
		printf("%d\n", ptr_b->value);
		ptr_b = ptr_b->prev;
	}
	// push_top_to_top(a_stack, b_stack);
	// printf("new stack a\n");
	// ptr_a = a_stack->top;
	// while (ptr_a != NULL)
	// {
	// 	printf("%d\n", ptr_a->value);
	// 	ptr_a = ptr_a->prev;
	// }
	// printf("new stack b\n");
	// ptr_b = b_stack->top;
	// while (ptr_b != NULL)
	// {
	// 	printf("%d\n", ptr_b->value);
	// 	ptr_b = ptr_b->prev;
	// }
	swap_first_2_in_both(a_stack, b_stack);
	printf("new stack a\n");
	ptr_a = a_stack->top;
	while (ptr_a != NULL)
	{
		printf("%d\n", ptr_a->value);
		ptr_a = ptr_a->prev;
	}
	printf("new stack b\n");
	ptr_b = b_stack->top;
	while (ptr_b != NULL)
	{
		printf("%d\n", ptr_b->value);
		ptr_b = ptr_b->prev;
	}

	return (0);
}