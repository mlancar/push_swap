/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:39:47 by malancar          #+#    #+#             */
/*   Updated: 2023/03/15 19:50:04 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
		sa(stack);
}

void	sort_3(t_stack *stack)
{
	if (stack->stack_a[0] < stack->stack_a[1]
		&& stack->stack_a[0] < stack->stack_a[2]
		&& stack->stack_a[1] > stack->stack_a[2])
	{
		rra(stack);
		sa(stack);
	}
	else if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[0] > stack->stack_a[2]
		&& stack->stack_a[1] > stack->stack_a[2])
	{
		ra(stack);
		sa(stack);
	}
	else if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[0] > stack->stack_a[2])
		ra(stack);
	else if (stack->stack_a[0] < stack->stack_a[1]
		&& stack->stack_a[0] > stack->stack_a[2])
		rra(stack);
	else if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[0] < stack->stack_a[2])
		sa(stack);
}

void	sort_4(t_stack *stack)
{
	rotate_min(stack);
	pb(stack);
	sort_3(stack);
	pa(stack);
}

void	sort_5(t_stack *stack)
{
	rotate_min(stack);
	rotate_min(stack);
	sort_3(stack);
	pa(stack);
	pa(stack);
}

void	sort(t_stack *stack)
{
	if (stack->size_a == 2)
		sort_2(stack);
	else if (stack->size_a == 3)
		sort_3(stack);
	else if (stack->size_a == 4)
		sort_4(stack);
	else if (stack->size_a == 5)
		sort_5(stack);
	else if (stack->size_a > 5)
	{
		replace_nbr(stack);
		radix(stack);
	}
}
