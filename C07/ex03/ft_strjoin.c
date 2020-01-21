/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 15:19:49 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/22 15:40:30 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_length(int size, char **str, char *sep)
{
	int i;
	int j;
	int total_length;

	i = 0;
	total_length = 0;
	if (size <= 0)
		return (1);
	while (i < size)
	{
		j = 0;
		while (str[i][j])
			j++;
		total_length = total_length + j;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	i = i * (size - 1);
	total_length = total_length + i;
	return (total_length + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		index_src;
	int		index_dest;
	char	*final_str;

	i = -1;
	index_src = -1;
	index_dest = -1;
	if (!(final_str = (char*)malloc(ft_length(size, strs, sep)
		* (sizeof(char)))))
		return (0);
	final_str[0] = size <= 0 ? '\0' : final_str[0];
	while (++i < size)
	{
		while (strs[i][++index_src])
			final_str[++index_dest] = strs[i][index_src];
		index_src = -1;
		if (i < size - 1)
			while (sep[++index_src])
				final_str[++index_dest] = sep[index_src];
		index_src = -1;
	}
	final_str[index_dest + 1] = '\0';
	return (final_str);
}
