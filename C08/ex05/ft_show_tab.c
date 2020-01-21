/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:21:00 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/18 19:30:10 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void				ft_print(char c)
{
	write(1, &c, 1);
}

void				ft_print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void				ft_print_nbr(int size)
{
	if (size > 9)
	{
		ft_print_nbr(size / 10);
		ft_print_nbr(size % 10);
	}
	else
		ft_print(size + 48);
}

void				ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_print_str(par[i].str);
		ft_print_nbr(par[i].size);
		write(1, "\n", 1);
		ft_print_str(par[i].copy);
		i++;
	}
}
