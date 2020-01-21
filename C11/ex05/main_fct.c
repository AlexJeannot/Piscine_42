/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:39:39 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/22 17:06:50 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

void	ft_print_nbr(int nbr)
{
	unsigned int un_nb;

	if (nbr < 0)
	{
		un_nb = -nbr;
		ft_putchar('-');
	}
	else
		un_nb = nbr;
	if (un_nb > 9)
	{
		ft_print_nbr(un_nb / 10);
		ft_print_nbr(un_nb % 10);
	}
	else
		ft_putchar(un_nb + 48);
}

int		ft_sign(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i])
	{
		if (str[i] > 47 && str[i] < 58)
			return (sign);
		if (str[i] == 43 || str[i] == 45)
		{
			while (str[i] == 43 || str[i] == 45)
			{
				if (str[i] == 45)
					sign *= -1;
				i++;
			}
			return (sign);
		}
		i++;
	}
	return (sign);
}

int		ft_convert(char *str)
{
	int i;
	int total;

	i = 0;
	total = 0;
	while (str[i] == 43 || str[i] == 45)
		i++;
	if (str[i] > 47 && str[i] < 58)
	{
		while (str[i] > 47 && str[i] < 58)
		{
			total = (total * 10) + (str[i] - 48);
			i++;
		}
		return (total * ft_sign(str));
	}
	return (0);
}

void	ft_exec(char *num, char *denomin, int (*f)(int, int))
{
	int i;
	int j;
	int final;

	i = ft_convert(num);
	j = ft_convert(denomin);
	final = f(i, j);
	ft_print_nbr(final);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if ((argv[2][1] != '\0') || (argv[2][0] != '+' && argv[2][0] != '*' &&
				argv[2][0] != '-' && argv[2][0] != '/' && argv[2][0] != '%'))
	{
		write(1, "0\n", 2);
		return (0);
	}
	else if (argv[2][0] == '+')
		ft_exec(argv[1], argv[3], &ft_add);
	else if (argv[2][0] == '-')
		ft_exec(argv[1], argv[3], &ft_minus);
	else if (argv[2][0] == '*')
		ft_exec(argv[1], argv[3], &ft_mul);
	else if (argv[2][0] == '/' && ft_convert(argv[3]) != 0)
		ft_exec(argv[1], argv[3], &ft_div);
	else if (argv[2][0] == '%' && ft_convert(argv[3]) != 0)
		ft_exec(argv[1], argv[3], &ft_mod);
	else if (argv[2][0] == '/' && ft_convert(argv[3]) == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (argv[2][0] == '%' && ft_convert(argv[3]) == 0)
		write(1, "Stop : modulo by zero\n", 22);
	return (0);
}
