/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:55:57 by malancar          #+#    #+#             */
/*   Updated: 2023/03/15 19:58:44 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 1;
	tmp = stack->stack_a[0];
	while (j < stack->size_a)
	{
		stack->stack_a[i] = stack->stack_a[j];
		i++;
		j++;
	}
	stack->stack_a[stack->size_a - 1] = tmp;
	ft_putstr("ra\n");
}

void	rb(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 1;
	tmp = stack->stack_b[0];
	while (j < stack->size_b)
	{
		stack->stack_b[i] = stack->stack_b[j];
		i++;
		j++;
	}
	stack->stack_b[stack->size_b - 1] = tmp;
	ft_putstr("rb\n");
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
	ft_putstr("rr\n");
}

void	rra(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = stack->size_a - 1;
	j = stack->size_a - 2;
	tmp = stack->stack_a[stack->size_a - 1];
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[j];
		i--;
		j--;
	}
	stack->stack_a[0] = tmp;
	ft_putstr("rra\n");
}

void	rrb(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = stack->size_b - 1;
	j = stack->size_b - 2;
	tmp = stack->stack_b[stack->size_b - 1];
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[j];
		i--;
		j--;
	}
	stack->stack_b[0] = tmp;
	ft_putstr("rrb\n");
}
