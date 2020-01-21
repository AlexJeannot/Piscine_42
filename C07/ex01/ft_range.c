/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 17:18:37 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/14 13:38:02 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int i;
	int j;

	i = min;
	j = 0;
	if (min >= max)
		return (NULL);
	while (i < max)
	{
		i++;
		j++;
	}
	range = (int *)malloc(sizeof(*range) * j);
	i = min;
	j = 0;
	while (i < max)
	{
		range[j] = i;
		j++;
		i++;
	}
	return (range);
}
