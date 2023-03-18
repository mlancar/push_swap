/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:55:51 by malancar          #+#    #+#             */
/*   Updated: 2023/03/15 20:21:21 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	replace_nbr(t_stack *stack)
{
	int	i;
	int	j;
	int	*tab;
	int	size;

	i = 0;
	size = stack->size_a;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return ;
	pre_sort(stack->stack_a, tab, size);
	while (i < size)
	{
		j = 0;
		while (j < size && tab[j] != stack->stack_a[i])
			j++;
		stack->stack_a[i] = j;
		i++;
	}
	free(tab);
}

void	pre_sort(int *stack, int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		tab[i] = stack[i];
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				i = 0;
		}
		else
			i++;
	}
}

int	len_nbr(int nbr)
{
	int	len;

	len = 1;
	while (nbr >= 2)
	{
		nbr = nbr / 2;
		len++;
	}
	return (len);
}

int	len_max(t_stack *stack)
{
	int	i;
	int	max;
	int	lenmax;

	i = 1;
	max = len_nbr(stack->stack_a[0]);
	lenmax = 1;
	while (i < stack->size_a)
	{
		max = len_nbr(stack->stack_a[i]);
		if (max > lenmax)
			lenmax = max;
		i++;
	}
	return (lenmax);
}

void	radix(t_stack *stack)
{
	int	i;
	int	j;
	int	max;
	int	size;

	i = 0;
	size = stack->size_a;
	max = len_max(stack);
	while (i < max)
	{
		j = 0;
		while (j < size)
		{
			if ((stack->stack_a[0] / calculate_power(2, i) % 2) == 0)
				pb(stack);
			else
				ra(stack);
			j++;
		}
		while (stack->size_b > 0)
			pa(stack);
		i++;
	}
}
