/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:21:01 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/09 11:43:54 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

void	check_1(char **map)
{
	int	i;
	int	len;

	len = 0;
	while (map[len])
		len++;
	i = 0;
	while (map[0][i] && map[len - 1][i])
	{
		if (map[0][i] != '1' || map[len - 1][i] != '1')
		{
			write(1, "Error\nUpDown\n", 13);
			exit(1);
		}
		i++;
	}
	check_2(map);
}

void	check_2(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (map[i][0] != '1' || map[i][ft_strlen(map[i]) - 1] != '1')
		{
			write(1, "Error\nRiLif\n", 12);
			exit(1);
		}
		i++;
	}
}
