/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:34:09 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/07 23:27:14 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

long	ft_digit(long int n)
{
	long	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*p;
	int			i;
	long int	h;

	h = (long int)n;
	i = ft_digit(h);
	p = malloc(sizeof(char) * i + 1);
	if (!p)
		return (NULL);
	p[i] = '\0';
	i -= 1;
	if (h == 0)
		p[0] = 48;
	if (h < 0)
	{
		h *= -1;
		p[0] = '-';
	}
	while (h != 0)
	{
		p[i] = h % 10 + 48;
		h = h / 10;
		i--;
	}
	return (p);
}
