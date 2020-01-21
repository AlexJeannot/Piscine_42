/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:53:30 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/22 16:55:13 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		ft_sign(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	return (sign);
}

int		ft_count_base(unsigned int nb, unsigned int base)
{
	unsigned int i;

	i = 1;
	while (nb >= base)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}

char	*ft_fin(unsigned int nb, unsigned int base, char *str, char *base_str)
{
	unsigned int		i;
	char				*nbr_final;

	i = ft_count_base(nb, base);
	if (ft_sign(str) == -1)
		i += 1;
	nbr_final = (char*)malloc(sizeof(char) * (i + 1));
	nbr_final[i] = '\0';
	while (nb >= base)
	{
		nbr_final[i - 1] = base_str[nb % base];
		nb = nb / base;
		i--;
	}
	nbr_final[i - 1] = base_str[nb % base];
	if (ft_sign(str) == -1)
		nbr_final[0] = '-';
	return (nbr_final);
}
