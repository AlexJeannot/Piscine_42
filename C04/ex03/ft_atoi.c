/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 07:46:14 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/11 21:30:05 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sign(char *str)
{
	int cmp_less;
	int i;

	cmp_less = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 45)
			cmp_less++;
		i++;
	}
	if (cmp_less % 2 == 0)
		return (1);
	else
		return (0);
}

int	ft_convert(char *str)
{
	int i;
	int number;

	i = 0;
	number = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (number);
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int number;

	i = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		sign = ft_sign(str);
		i++;
	}
	if (str[i] > 47 && str[i] < 58)
	{
		number = ft_convert(&str[i]);
		if (sign == 1)
			return (number);
		else
			return (-number);
	}
	else
		return (0);
}
