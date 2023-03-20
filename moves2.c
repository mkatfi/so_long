/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:42:37 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/07 13:13:15 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_up1(t_so *p)
{
	if (p->map[p->p_x - 1][p->p_y] == '0')
	{
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img2, p->p_y * p->w, p->p_x * p->h);
		p->map[p->p_x][p->p_y] = '0';
		p->p_x = p->p_x - 1;
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img6, p->p_y * p->w, p->p_x * p->h);
		movestr(p);
	}
	else if (p->map[p->p_x - 1][p->p_y] == 'C')
	{
		p->map[p->p_x][p->p_y] = '0';
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img2, p->p_y * p->w, p->p_x * p->h);
		p->map[p->p_x - 1][p->p_y] = '0';
		p->p_x = p->p_x - 1;
		p->coll--;
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img6, p->p_y * p->w, p->p_x * p->h);
		movestr(p);
	}
}

void	ft_down1(t_so *p)
{
	if (p->map[p->p_x + 1][p->p_y] == '0')
	{
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img2, p->p_y * p->w, p->p_x * p->h);
		p->map[p->p_x][p->p_y] = '0';
		p->p_x = p->p_x + 1;
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img9, p->p_y * p->w, p->p_x * p->h);
		movestr(p);
	}
	else if (p->map[p->p_x + 1][p->p_y] == 'C')
	{
		p->map[p->p_x][p->p_y] = '0';
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img2, p->p_y * p->w, p->p_x * p->h);
		p->map[p->p_x + 1][p->p_y] = '0';
		p->p_x = p->p_x + 1;
		p->coll--;
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img9, p->p_y * p->w, p->p_x * p->h);
		movestr(p);
	}
}

void	ft_right1(t_so *p)
{
	if (p->map[p->p_x][p->p_y + 1] == '0')
	{
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img2, p->p_y * p->w, p->p_x * p->h);
		p->map[p->p_x][p->p_y] = '0';
		p->p_y = p->p_y + 1;
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img7, p->p_y * p->w, p->p_x * p->h);
		movestr(p);
	}
	else if (p->map[p->p_x][p->p_y + 1] == 'C')
	{
		p->map[p->p_x][p->p_y] = '0';
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img2, p->p_y * p->w, p->p_x * p->h);
		p->map[p->p_x][p->p_y + 1] = '0';
		p->p_y = p->p_y + 1;
		p->coll--;
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win,
			p->img7, p->p_y * p->w, p->p_x * p->h);
		movestr(p);
	}
}

void	ft_left1(t_so *p)
{
	if (p->map[p->p_x][p->p_y - 1] == '0')
	{
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img2,
			p->p_y * p->w, p->p_x * p->h);
		p->map[p->p_x][p->p_y] = '0';
		p->p_y = p->p_y - 1;
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img8,
			p->p_y * p->w, p->p_x * p->h);
		movestr(p);
	}
	else if (p->map[p->p_x][p->p_y - 1] == 'C')
	{
		p->map[p->p_x][p->p_y] = '0';
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img2,
			p->p_y * p->w, p->p_x * p->h);
		p->map[p->p_x][p->p_y - 1] = '0';
		p->p_y = p->p_y - 1;
		p->coll--;
		mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img8,
			p->p_y * p->w, p->p_x * p->h);
		movestr(p);
	}
}
