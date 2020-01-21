/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 16:03:17 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/18 19:29:38 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_length(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_cpy(char *str, char *copy)
{
	int i;

	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	char				*copy;
	struct s_stock_str	*tab;

	i = 0;
	tab = malloc(sizeof(*tab) * (ac + 1));
	if (tab == 0)
		return (0);
	while (i < ac)
	{
		copy = (char*)malloc((sizeof(char) * ft_length(av[i])) + 1);
		if (copy == 0)
			return (0);
		copy = ft_cpy(av[i], copy);
		tab[i].size = ft_length(av[i]);
		tab[i].str = av[i];
		tab[i].copy = copy;
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
