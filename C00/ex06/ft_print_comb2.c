/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:45:25 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/03 14:01:54 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a)
{
	int k;
	int l;

	if (a > 9)
	{
		k = a / 10;
		l = a % 10;
		ft_putchar(k + 48);
		ft_putchar(l + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(a + 48);
	}
}

void	separation(int a)
{
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a);
			ft_putchar(' ');
			ft_print(b);
			separation(a);
			b++;
		}
		a++;
	}
}
