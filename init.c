/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:47:45 by malancar          #+#    #+#             */
/*   Updated: 2023/03/18 06:46:31 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_size(int size, char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		size = size + nbr_wrd(av[i]);
		i++;
	}
	return (size);
}

int	*init_tab(char **arg, int *tab)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 1;
	k = 0;
	while (arg[i])
	{
		split = ft_split(arg[i]);
		if (!split)
			return (0);
		j = 0;
		while (split[j])
		{
			if (check_args(split, tab, j) == 0)
				return (0);
			tab[k] = ft_atoi(split[j]);
			j++;
			k++;
		}
		i++;
		free_tab(split);
	}
	return (tab);
}

t_stack	*init_stack(int size, int *tab)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->stack_a = tab;
	stack->stack_b = malloc(sizeof(int) * size);
	if (!stack->stack_b)
	{	
		free(stack);
		return (NULL);
	}
	stack->size_a = size;
	stack->size_b = 0;
	return (stack);
}
