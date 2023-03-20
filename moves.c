/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:02:54 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/09 11:28:28 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_up(t_so *p)
{
	if (p->map[p->p_x - 1][p->p_y] == 'E')
	{
		if (p->coll == 0)
		{
			movestr(p);
			write(1, "you win\n", 8);
			exit(0);
		}
	}
	else
	{
		ft_up1(p);
		if (p->coll == 0)
		{
			mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img10,
				p->y * p->w, p->x * p->h);
		}
	}
}

void	ft_down(t_so *p)
{
	if (p->map[p->p_x + 1][p->p_y] == 'E')
	{
		if (p->coll == 0)
		{
			movestr(p);
			write(1, "you win\n", 8);
			exit(0);
		}
	}
	else
	{
		ft_down1(p);
		if (p->coll == 0)
		{
			mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img10,
				p->y * p->w, p->x * p->h);
		}
	}
}

void	ft_right(t_so *p)
{
	if (p->map[p->p_x][p->p_y + 1] == 'E')
	{
		if (p->coll == 0)
		{
			movestr(p);
			write(1, "you win\n", 8);
			exit(0);
		}
	}
	else
	{
		ft_right1(p);
		if (p->coll == 0)
		{
			mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img10,
				p->y * p->w, p->x * p->h);
		}
	}
}

void	ft_left(t_so *p)
{
	if (p->map[p->p_x][p->p_y - 1] == 'E')
	{
		if (p->coll == 0)
		{
			movestr(p);
			write(1, "you win\n", 8);
			exit(0);
		}
	}
	else
	{
		ft_left1(p);
		if (p->coll == 0)
		{
			mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img10,
				p->y * p->w, p->x * p->h);
		}
	}
}
