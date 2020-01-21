/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 08:42:23 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/08 19:00:37 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 0)
		i = nb * (ft_recursive_factorial(nb - 1));
	return (i);
}
