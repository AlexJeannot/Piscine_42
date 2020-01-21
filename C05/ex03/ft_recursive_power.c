/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 10:11:47 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/08 19:08:21 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int i;

	i = power;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (i > 0)
		nb = nb * ft_recursive_power(nb, (power - 1));
	return (nb);
}
