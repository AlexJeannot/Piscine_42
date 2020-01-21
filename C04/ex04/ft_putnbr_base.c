/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 11:18:44 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/17 14:57:01 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_error(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr, unsigned int size)
{
	unsigned int i;

	if (nbr < 0)
	{
		write(1, "-", 1);
		i = nbr * -1;
	}
	else
		i = nbr;
	if (i >= size)
	{
		ft_putnbr(i / size, size);
		ft_putnbr(i % size, size);
	}
	else
		ft_putchar(i + 48);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = ft_check_error(base);
	if (size > 1)
		ft_putnbr(nbr, size);
}
