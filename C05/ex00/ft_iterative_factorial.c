/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 08:19:58 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/08 18:57:44 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
