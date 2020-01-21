/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:59:34 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/11 09:50:15 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_comparison(char *first_arg, char *second_arg)
{
	int i;

	i = 0;
	while (first_arg[i] || second_arg[i])
	{
		if (first_arg[i] == second_arg[i])
			i++;
		else if (first_arg[i] > second_arg[i])
			return (1);
		else
			return (0);
	}
	return (0);
}

char	**ft_sort(char **arg_list)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (arg_list[i])
	{
		j = i;
		while (arg_list[j + 1])
		{
			if (ft_comparison(arg_list[j], arg_list[j + 1]) == 0)
				j++;
			else
			{
				tmp = arg_list[j];
				arg_list[j] = arg_list[j + 1];
				arg_list[j + 1] = tmp;
				j = i;
			}
		}
		i++;
	}
	return (arg_list);
}

int		main(int argc, char **argv)
{
	int		i;
	int		length;
	char	**arg_sorted_list;

	(void)argc;
	(void)argv;
	arg_sorted_list = ft_sort(&argv[1]);
	i = 0;
	while (arg_sorted_list[i])
	{
		length = 0;
		while (arg_sorted_list[i][length])
			length++;
		write(1, arg_sorted_list[i], length);
		write(1, "\n", 1);
		i++;
	}
}
