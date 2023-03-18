/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 02:52:33 by malancar          #+#    #+#             */
/*   Updated: 2023/03/17 20:17:05 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
}	t_stack;

char	**ft_split(char *str);
int		len_nbr(int nbr);
int		len_wrd(char *str);
int		nbr_wrd(char *str);
int		ft_atoi(char *str);
int		check_arg(char *str);
int		check_atoi(char *str);
int		len_max(t_stack *stack);
int		index_min(t_stack *stack);
int		index_min(t_stack *stack);
int		init_size(int size, char **av);
int		*init_tab(char **arg, int *tab);
int		check_if_sorted(t_stack *stack);
int		calculate_power(int nb, int power);
int		check_double(int *tab, int n, int size);
int		check_doubles(int i, int size, int *tab);
int		check_args(char **split, int *tab, int j);
int		init_split(char **tab, char *str, int i, int *j);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	pb(t_stack *stack);
void	pa(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);
void	free_tab(char **tab);
void	ft_putstr(char *str);
void	sort(t_stack *stack);
void	free_tab(char **tab);
void	radix(t_stack *stack);
void	sort_2(t_stack *stack);
void	sort_3(t_stack *stack);
void	sort_4(t_stack *stack);
void	sort_5(t_stack *stack);
void	free_stack(t_stack *stack);
void	rotate_min(t_stack *stack);
void	free_stack(t_stack *stack);
void	replace_nbr(t_stack *stack);
void	pre_sort(int *stack, int *tab, int size);
t_stack	*init_stack(int size, int *tab);

#endif
