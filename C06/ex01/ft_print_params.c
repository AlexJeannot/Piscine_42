/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 09:11:10 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/09 13:59:12 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int length;

	(void)argc;
	(void)argv;
	i = 1;
	while (argv[i])
	{
		length = 0;
		while (argv[i][length])
			length++;
		write(1, argv[i], length);
		write(1, "\n", 1);
		i++;
	}
}
