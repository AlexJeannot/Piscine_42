/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 09:26:35 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/12 12:26:14 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *argv)
{
	int length;

	length = 0;
	while (argv[length])
		length++;
	write(1, argv, length);
	write(1, "\n", 1);
	length++;
}

int		main(int argc, char **argv)
{
	int		i;
	int		length;

	(void)argc;
	(void)argv;
	i = argc - 1;
	length = 0;
	if (argc > 1)
	{
		while (i > 0)
		{
			ft_print(argv[i]);
			i--;
		}
	}
}
