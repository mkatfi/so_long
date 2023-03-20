/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:24:39 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/09 11:50:51 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_path(int pos_x, int pos_y, char **map)
{
	map[pos_x][pos_y] = '*';
	if (map[pos_x - 1][pos_y] == '0' || map[pos_x - 1][pos_y] == 'C')
		check_path(pos_x - 1, pos_y, map);
	if (map[pos_x + 1][pos_y] == '0' || map[pos_x + 1][pos_y] == 'C')
		check_path(pos_x + 1, pos_y, map);
	if (map[pos_x][pos_y - 1] == '0' || map[pos_x][pos_y - 1] == 'C')
		check_path(pos_x, pos_y - 1, map);
	if (map[pos_x][pos_y + 1] == '0' || map[pos_x][pos_y + 1] == 'C')
		check_path(pos_x, pos_y + 1, map);
}

void	check_coll(char **map2)
{
	int	i;
	int	j;

	i = 0;
	while (map2[i])
	{
		j = 0;
		while (map2[i][j])
		{
			if (map2[i][j] == 'C')
			{
				write(1, "Error\nInvalid path\n", 19);
				exit(1);
			}
			if (map2[i][j] == 'E' && (map2[i + 1][j] != '*' &&
				map2[i - 1][j] != '*' && map2[i][j + 1] != '*'
				&& map2[i][j - 1] != '*'))
			{
				write(1, "Error\nINvalid path\n", 19);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_p01ec(char **str, t_so *p)
{
	p->a = -1;
	while (str[++p->a])
	{
		p->b = -1;
		while (str[p->a][++p->b])
		{
			if (str[p->a][p->b] == 'C')
				p->collmeet++;
			else if (str[p->a][p->b] == 'E')
				p->exit++;
			else if (str[p->a][p->b] == 'P')
				p->play++;
			else if (str[p->a][p->b] != '0' && str[p->a][p->b] != '1')
			{
				write (2, "Error\nUtil\n", 11);
				exit(1);
			}
		}
	}
	if (p->exit != 1 || p->play != 1 || p->collmeet < 1)
	{
		write (2, "Error\nUtil\n", 11);
		exit(1);
	}
}

void	check_ber(char	*str)
{
	int		i;
	char	*s;

	i = 0;
	s = ft_strrchr(str, '.');
	while (str[i])
		i++;
	if (i < 5)
	{
		write(2, "Error\n.ber\n", 11);
		exit(1);
	}
	else if (ft_strchr(str, '.') == 0)
	{
		write(2, "Error\n.ber\n", 11);
		exit(1);
	}
	else if (ft_strncmp(s, ".ber") != 0)
	{
		write(2, "Error\n.ber\n", 11);
		exit(1);
	}
}

void	map_area(char	**str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (ft_strlen(str[i]) != ft_strlen(str[0]))
		{
			write(1, "Error\nLenLen\n", 13);
			exit(1);
		}
		i++;
	}
}
