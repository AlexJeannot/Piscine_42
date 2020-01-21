/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 15:36:14 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/15 11:42:40 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_length_range(int min, int max)
{
	int i;
	int j;

	i = min;
	j = 0;
	while (i < max)
	{
		i++;
		j++;
	}
	return (j);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;
	int *tab;

	i = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	j = ft_length_range(min, max);
	tab = (int *)malloc(sizeof(*tab) * j);
	if (tab == 0)
		return (-1);
	j = 0;
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	*range = tab;
	return (j);
}
