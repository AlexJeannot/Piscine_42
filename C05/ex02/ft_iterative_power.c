/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 09:40:23 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/09 08:48:31 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power == 0)
		return (1);
	else if (i == 0 || power < 0)
		return (0);
	else
	{
		while ((power - 1) > 0)
		{
			nb *= i;
			power--;
		}
		return (nb);
	}
}
