/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:57:43 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/09 12:28:03 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

void	position(t_so *p)
{
	int	i;
	int	j;
	int	coll;

	coll = 0;
	i = 0;
	while (p->map[i])
	{
		j = 0;
		while (p->map[i][j])
		{
			pospos(p, i, j);
			if (p->map[i][j] == 'C')
				coll++;
			j++;
		}
		i++;
	}
	p->coll = coll;
}

void	pospos(t_so	*p, int x, int y)
{
	if (p->map[x][y] == 'P')
	{
		p->p_x = x;
		p->p_y = y;
	}
	if (p->map[x][y] == 'E')
	{
		p->x = x;
		p->y = y;
	}
}

void	movestr(t_so	*p)
{
	char	*s;

	p->mim++;
	s = ft_itoa(p->mim);
	mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img1, 0 * 40, 0 * 40);
	mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img1, 1 * 40, 0 * 40);
	mlx_string_put(p->mlx_ptr, p->mlx_win, 0, 0, 0x00ff100, "MOVE");
	mlx_string_put(p->mlx_ptr, p->mlx_win, 1 * 45, 0, 0x00ff100, s);
	free(s);
}

void	fprint_error(void)
{
	write(2, "ERROR\n INVALID NUMBERS OF ARGUMENTS", 36);
	exit(1);
}
