/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:44:17 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/20 20:18:45 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *final_tab;

	i = 0;
	final_tab = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		final_tab[i] = f(tab[i]);
		i++;
	}
	return (final_tab);
}
