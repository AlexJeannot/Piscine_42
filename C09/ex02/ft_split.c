/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:33:30 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/15 09:05:05 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		else
			i++;
	}
	return (0);
}

int		ft_cmp_words(char *str, char *charset)
{
	int i;
	int words_cmp;

	i = 0;
	words_cmp = 0;
	while (str[i])
	{
		if (((ft_sep(str[i], charset) == 1 && i != 0) &&
			(ft_sep(str[i - 1], charset) == 0))
			|| (ft_sep(str[i], charset) == 0 && str[i + 1] == '\0'))
			words_cmp += 1;
		i++;
	}
	return (words_cmp);
}

char	**ft_put_char(int diff, char *str, char **tab, int index)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (i < diff)
	{
		tab[index][k] = str[i];
		k++;
		i++;
	}
	tab[index][k] = '\0';
	return (tab);
}

char	**ft_put_string(char **tab, char *str, char *charset, int cmp)
{
	int i;
	int j;
	int index;

	i = 0;
	j = 0;
	index = 0;
	while (str[i])
	{
		if (ft_sep(str[i], charset) == 0 && i < cmp)
		{
			j = i;
			while (ft_sep(str[j], charset) == 0 && j < cmp)
				j++;
			tab[index] = (char*)malloc(sizeof(char) * (j - i + 1));
			tab = ft_put_char((j - i), &str[i], tab, index);
			i = j - 1;
			index++;
		}
		i++;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		nb_words;
	char	**tab;

	i = 0;
	while (str[i])
		i++;
	nb_words = ft_cmp_words(str, charset);
	tab = (char **)malloc(sizeof(char*) * (nb_words + 1));
	tab = ft_put_string(tab, str, charset, i);
	tab[nb_words] = (char*)malloc(sizeof(char));
	tab[nb_words] = 0;
	return (tab);
}
