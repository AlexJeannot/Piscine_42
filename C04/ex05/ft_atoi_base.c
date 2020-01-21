/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 21:06:21 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/13 14:44:55 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if ((base[i] > 8 && base[i] < 14) || base[i] == 32
				|| base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		ft_check_nb(char nb, char *base)
{
	int i;

	i = 0;
	while (base[i] && (base[i] != nb))
		i++;
	if (base[i] == nb)
		return (i);
	else
		return (-1);
}

int		ft_sign(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	return (sign);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		nb_final;
	int		base_length;

	base_length = ft_check_base(base);
	if (base_length < 2)
		return (0);
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
		i++;
	while (str[i] == 43 || str[i] == 45)
		i++;
	nb_final = 0;
	while (str[i] && (ft_check_nb(str[i], base) > -1))
	{
		nb_final = (nb_final * base_length) + ft_check_nb(str[i], base);
		i++;
	}
	return (nb_final * ft_sign(str));
}
