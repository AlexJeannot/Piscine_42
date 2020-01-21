/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 19:47:09 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/11 08:38:58 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	*name;

	(void)argc;
	(void)argv;
	i = 0;
	name = argv[0];
	while (name[i])
		i++;
	write(1, name, i);
	write(1, "\n", 1);
}
