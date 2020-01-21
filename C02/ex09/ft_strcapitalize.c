/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 15:08:46 by ajeannot          #+#    #+#             */
/*   Updated: 2019/08/05 19:27:41 by ajeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlow(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcap(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			if (str[i] >= 97 && str[i] <= 122 && i == 0)
				str[i] = str[i] - 32;
			else if (((str[i] <= 64 && (str[i] >= 58 || str[i] <= 47))
					|| ((str[i] >= 91 && str[i] <= 96) || str[i] >= 123))
					&& (str[i + 1] >= 97 && str[i + 1] <= 122))
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	ft_strcap(ft_strlow(str));
	return (str);
}
