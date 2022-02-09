/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:56:37 by ehosu             #+#    #+#             */
/*   Updated: 2022/02/09 14:04:25 by ehosu            ###   ########.fr       */
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

// int check_stack_B_sorted(t_stack *stack)
// {
// 	t_node	*ptr;

// 	ptr = stack->bottom;
// 	while (ptr != NULL)
// 	{
// 		if (ptr->next == NULL)
// 			return (1);
// 		if (ptr->value > ptr->next->value)
// 			return (0);
// 		ptr = ptr->next;
// 	}
// 	return (1);
// }

// int	check_stack_A_sorted(t_stack *stack)
// {
// 	t_node	*ptr;

// 	ptr = stack->top;
// 	while (ptr != NULL)
// 	{
// 		if (ptr->prev == NULL)
// 			return (1);
// 		if (ptr->value > ptr->prev->value)
// 			return (0);
// 		ptr = ptr->prev;
// 	}
// 	return (1);
// }

// void	check_top_push_value(t_stack *stack_1, t_stack *stack_2, int value, char *char_ar)
// {
// 	t_node *ptr;
	
// 	ptr = stack_1->top;
// 	while (ptr != NULL)
// 	{
// 		if (ptr->value == value)
// 		{
// 			push_top_to_top(stack_2, stack_1, char_ar[1]);
// 			break ;
// 		} else if (ptr->prev->value == value)
// 		{
// 			swap_first_2_elements(stack_1, char_ar[0]);
// 			push_top_to_top(stack_2, stack_1, char_ar[1]);
// 			break ;
// 		}
// 		rotate_first_with_last_element(stack_1, char_ar[0]);
// 		ptr = stack_1->top;
// 	}
// }

// void	check_bottom_push_value(t_stack *stack_1, t_stack *stack_2, int value, char *char_ar)
// {
// 	t_node *ptr;

// 	ptr = stack_1->bottom;
// 	while (ptr != NULL)
// 	{
// 		if (ptr->value == value)
// 		{
// 			rotate_last_with_first_element(stack_1, char_ar[0]);
// 			push_top_to_top(stack_2, stack_1, char_ar[1]);
// 			break ;
// 		}
// 		rotate_last_with_first_element(stack_1, char_ar[0]);
// 		ptr = stack_1->bottom;
// 	}
// }

void	sort_last_two_in_B(t_stack *stack_b, t_stack *stack_a)
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
	t_node *ptr;
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
			check_top_push_value(stack_b, stack_a, biggest_number(stack_b), char_ar);
		else
			check_bottom_push_value(stack_b, stack_a, biggest_number(stack_b), char_ar);
		half_size = node_size(stack_b->top) / 2;
		ptr = stack_b->top;
	}
	sort_last_two_in_B(stack_b, stack_a);
}

// void	sort_big_amaount(t_stack *stack_a, t_stack *stack_b)
// {
// 	t_node *ptr;
// 	int		chunk_border;
// 	int		stack_size;
// 	int		count;
// 	int		back_top;

// 	ptr = stack_a->top;
// 	chunk_border = node_size(ptr) / 2;
// 	stack_size = node_size(ptr) / 2;
// 	while (node_size(stack_a->top) >= 4)
// 	{
// 		count = 0;
// 		ptr = stack_a->top;
// 		while (count < chunk_border)
// 		{
// 			back_top = 0;
// 			if (ptr->index < chunk_border)
// 			{
// 				if (check_position(stack_a, ptr->value) <= stack_size)
// 				{
// 					check_top_push_value(stack_a, stack_b, ptr->value, 'a', 'b');
// 					back_top = 1;
// 				}
// 				else
// 				{
// 					check_bottom_push_value(stack_a, stack_b, ptr->value, 'a', 'b');
// 					back_top = 1;
// 				}
// 				count++;
// 				stack_size = node_size(stack_a->top) / 2;
// 				if (check_stack_A_sorted(stack_a))
// 					break ;
// 			}
// 			if (back_top)
// 				ptr = stack_a->top;
// 			else
// 				ptr = ptr->prev;
// 		}
// 		add_stack_sorted_index_values(add_to_array(stack_a), stack_a);
// 		chunk_border = node_size(stack_a->top) / 2;
// 	}
// 	small_amount_checker(stack_a);
// }

// void	check_values(char **argv)
// {
// 	int i;

// 	i = 1;
// 	while (argv[i])
// 	{
// 		printf("%s\n", argv[i]);
// 		while (argv[i])
// 		{
		// 	printf("%c\n", *argv[i]);
		// 	exit(EXIT_SUCCESS);
		// }
		
		// if ((ft_atoi(argv[i]) == 0) && (ft_strncmp(argv[i], "0", 1) != 0))
		// {
		// 	write(1, "Error\n", 6);
		// 	exit(EXIT_FAILURE);
		// }
// 		i++;
// 	}
// }
// static	int	is_space_c(int c)
// {
// 	if (c == '\t' || c == ' ' || c == '\n'
// 		|| c == '\r' || c == '\v' || c == '\f')
// 		return (1);
// 	return (0);
// }

// int	ft_atoc(const char *str)
// {
// 	int	i;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (ft_isalpha(str[i]))
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

int main(int argc, char **argv)
{
	t_node *ptr_a;
	t_stack *a_stack;
	t_stack *b_stack;

	a_stack = create_stack();
	b_stack = create_stack();
	
	if (argc < 2)
		exit(EXIT_FAILURE);
	handle_errors(argv);
	add_to_stack(a_stack, argv);
	add_stack_sorted_index_values(add_to_array(a_stack), a_stack);
	if (check_stack_a_sorted(a_stack))
		exit(EXIT_SUCCESS);
	// ptr_a = a_stack->top;
	// while (ptr_a != NULL)
	// {
	// 	printf("%d\n", ptr_a->value);
	// 	ptr_a = ptr_a->prev;
	// }
	sort_big_amaount(a_stack, b_stack);
	move_biggest_to_stack(a_stack, b_stack);
	//Personal
	printf("Check stack_a\n");
	ptr_a = a_stack->top;
	while (ptr_a != NULL)
	{
		printf("%d\n", ptr_a->value);
		ptr_a = ptr_a->prev;
	}
	printf("Check stack_b\n");
	ptr_a = b_stack->top;
	while (ptr_a != NULL)
	{
		printf("%d\n", ptr_a->value);
		ptr_a = ptr_a->prev;
	}

	// printf("%d\n", a_stack->top->value);
	exit(EXIT_SUCCESS);

	return (0);
}