/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 01:22:58 by malancar          #+#    #+#             */
/*   Updated: 2023/03/23 03:47:06 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	int		size;
	int		*tab;
	t_stack	*stack;

	size = 0;
	if (ac < 2)
		return (0);
	size = init_size(size, av);
	i = 0;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (ft_putstr("NULL"), 0);
	if ((init_tab(av, tab) == 0) || (check_doubles(i, size, tab) == 0))
		return (ft_putstr("Error\n"), 0);
	stack = init_stack(size, tab);
	if (stack == NULL)
		return (ft_putstr("Error\n"), 0);
	if (check_if_sorted(stack) == 0)
		sort(stack);
	free_stack(stack);
}
