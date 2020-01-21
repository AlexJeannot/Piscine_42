/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 18:24:10 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/01 20:29:26 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nb(unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = nb / 10;
	j = nb % 10;
	if (i >= 10)
	{
		ft_nb(i);
	}
	else
	{
		ft_putchar(i + 48);
	}
	ft_putchar(j + 48);
}

void	ft_neg(unsigned int nb)
{
	nb = -nb;
	ft_putchar('-');
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_nb(nb);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + 48);
	}
	else if (nb < 0)
	{
		ft_neg(nb);
	}
	else
	{
		ft_nb(nb);
	}
}
