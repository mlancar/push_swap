/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:12:17 by malancar          #+#    #+#             */
/*   Updated: 2023/03/15 20:21:04 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_min(t_stack *stack)
{
	int	i;
	int	min;
	int	index_min;

	i = 1;
	index_min = 0;
	min = stack->stack_a[0];
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] < min)
		{
			min = stack->stack_a[i];
			index_min = i;
		}
		i++;
	}		
	return (index_min);
}

void	rotate_min(t_stack *stack)
{
	int	i;

	i = index_min(stack);
	if (i <= 2)
	{
		while (i != 0)
		{
			ra(stack);
			i--;
		}
	}
	else if (i > 2)
	{
		while (i < stack->size_a)
		{
			rra(stack);
			i++;
		}
	}
	pb(stack);
}

int	calculate_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*#include <stdio.h>
void	print_stack(t_stack *stack)
{
	int	i;

	i = 0;
	printf("stack_a   stack_b\n");
	while (i < stack->size_a || i < stack->size_b)
	{
		if (i < stack->size_a && i >= stack->size_b)
			printf("   %3d\n", stack->stack_a[i]);
		else if (i >= stack->size_a && i < stack->size_b)
			printf("               %3d\n", stack->stack_b[i]);
		else
			printf("   %3d         %3d\n", stack->stack_a[i], stack->stack_b[i]);
		i++;
	}
	printf("_________________________________________________\n\n");
	printf("size_a    size_b\n   %d         %d\n", stack->size_a, stack->size_b);
	printf("_________________________________________________\n\n");
}*/
