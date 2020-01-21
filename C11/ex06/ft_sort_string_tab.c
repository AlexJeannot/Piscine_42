/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:54:43 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/22 10:33:15 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compare(char *origin, char *compare)
{
	int i;

	i = 0;
	while (origin[i] && compare[i] && origin[i] == compare[i])
		i++;
	return (origin[i] - compare[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i] != 0)
	{
		j = i;
		while (tab[j + 1] != 0)
		{
			if (ft_compare(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
				j = i;
			}
			else
				j++;
		}
		i++;
	}
}
