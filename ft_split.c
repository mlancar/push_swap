/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:34:14 by malancar          #+#    #+#             */
/*   Updated: 2023/03/15 20:13:42 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_wrd(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] && str[i] == 32)
		i++;
	while (str[i] && str[i] != 32)
	{
		i++;
		len++;
	}
	return (len);
}

int	nbr_wrd(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		if (str[i] != 32)
		{
			nbr++;
			while (str[i] && str[i] != 32)
				i++;
		}
		if (str[i])
			i++;
	}
	return (nbr);
}

int	init_split(char **tab, char *str, int i, int *j)
{
	int	k;

	while (str[i])
	{
		if (str[i] != 32)
		{
			tab[*j] = malloc(sizeof(char) * (len_wrd(str) + 1));
			if (!tab[*j])
				return (free(tab), 0);
			k = 0;
			while (str[i] && str[i] != 32)
			{
				tab[*j][k] = str[i];
				i++;
				k++;
			}
			tab[*j][k] = '\0';
			(*j)++;
		}
		if (str[i])
			i++;
	}
	return (1);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (nbr_wrd(str) + 1));
	if (!tab)
		return (NULL);
	while (str[i] && str[i] == 32)
		i++;
	if (!(init_split(tab, str, i, &j)))
		return (NULL);
	tab[j] = NULL;
	return (tab);
}
