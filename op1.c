/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 04:02:24 by malancar          #+#    #+#             */
/*   Updated: 2023/03/15 20:00:43 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	tmp;

	if (stack->size_a > 1)
	{
		tmp = stack->stack_a[0];
		stack->stack_a[0] = stack->stack_a[1];
		stack->stack_a[1] = tmp;
	}
	ft_putstr("sa\n");
}

void	sb(t_stack *stack)
{
	int	tmp;

	if (stack->size_b > 1)
	{
		tmp = stack->stack_b[0];
		stack->stack_b[0] = stack->stack_b[1];
		stack->stack_b[1] = tmp;
	}
	ft_putstr("sb\n");
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
	ft_putstr("ss\n");
}

void	pb(t_stack *stack)
{
	int	i;

	i = stack->size_b;
	if (stack->size_a > 0)
	{
		while (i > 0)
		{
			stack->stack_b[i] = stack->stack_b[i - 1];
			i--;
		}
		stack->stack_b[0] = stack->stack_a[0];
		stack->size_b++;
		i = 0;
		while (i < stack->size_a - 1)
		{
			stack->stack_a[i] = stack->stack_a[i + 1];
			i++;
		}
		stack->size_a--;
	}
	ft_putstr("pb\n");
}

void	pa(t_stack *stack)
{
	int	i;

	i = stack->size_a;
	if (stack->size_b > 0)
	{
		while (i > 0)
		{
			stack->stack_a[i] = stack->stack_a[i - 1];
			i--;
		}
		stack->stack_a[0] = stack->stack_b[0];
		stack->size_a++;
		i = 0;
		while (i < stack->size_b - 1)
		{
			stack->stack_b[i] = stack->stack_b[i + 1];
			i++;
		}
		stack->size_b--;
	}
	ft_putstr("pa\n");
}
