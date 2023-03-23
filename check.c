/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:24:25 by malancar          #+#    #+#             */
/*   Updated: 2023/03/17 20:17:21 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_doubles(int i, int size, int *tab)
{
	while (i < size)
	{
		if (check_double(tab, tab[i], size) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_double(int *tab, int n, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		if (tab[i] == n)
			j++;
		i++;
	}
	if (j > 1)
	{
		free(tab);
		return (0);
	}
	return (1);
}

int	check_args(char **split, int *tab, int j)
{
	if (check_arg(split[j]) == 0)
	{
		free(tab);
		free_tab(split);
		return (0);
	}
	if (check_atoi(split[j]) == 0)
	{
		free(tab);
		free_tab(split);
		return (0);
	}
	return (1);
}

int	check_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == 32)
		i++;
	if ((str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		|| (str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9')))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] || i == 0)
		return (0);
	return (1);
}

int	check_if_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a)
	{
		if (i < (stack->size_a - 1)
			&& stack->stack_a[i] > stack->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
