/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 15:59:43 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/22 17:01:28 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_fin(int nb, int base, char *str, char *base_str);
int		ft_sign(char *str);
int		ft_put_first_base(char *str, int base, char *base_from);
char	*ft_swap(char *str);
char	*ft_is_negative(char *str);

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32 ||
				base[i] == 43 || base[i] == 45)
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

int		ft_check_char(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	if (base[i] == c)
		return (i);
	return (-1);
}

int		ft_put_first_base(char *str, int base, char *base_from)
{
	int				i;
	unsigned int	nb;

	i = 0;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
		i++;
	nb = 0;
	while (str[i] && (ft_check_char(str[i], base_from) > -1))
	{
		nb = (nb * base) + ft_check_char(str[i], base_from);
		i++;
	}
	return (nb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_origin;
	int		base_dest;
	int		inter_nb;
	char	*final_nb;

	inter_nb = 0;
	if (nbr[0] == '\0' || base_from[0] == '\0' || base_to[0] == '\0')
		return (NULL);
	base_origin = ft_check_base(base_from);
	base_dest = ft_check_base(base_to);
	if (base_origin < 2 || base_dest < 2)
		return (NULL);
	inter_nb = ft_put_first_base(nbr, base_origin, base_from);
	final_nb = ft_fin(inter_nb, base_dest, nbr, base_to);
	return (final_nb);
}
