/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_to_win_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 01:18:36 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/07 23:27:56 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

void	util(t_so *p)
{
	p->mim = 0;
	p->mlx_ptr = mlx_init();
	file_image1(p);
	file_image2(p);
	p->mlx_win = mlx_new_window(p->mlx_ptr, ft_strlen(p->map3[0]) * p->w,
			count_word(p->buff, '\n') * p->h, "$MONKEY D LUFFY$");
	position(p);
	movestr(p);
}

void	image_win(t_so *p)
{
	util(p);
	p->i = 0;
	while (p->map[p->i])
	{
		p->j = 0;
		while (p->map[p->i][p->j])
		{
			mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img2,
				p->j * p->w, p->i * p->h);
			if (p->map[p->i][p->j] == '1')
				mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img1,
					p->j * p->w, p->i * p->h);
			if (p->map[p->i][p->j] == 'C')
				mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img3,
					p->j * p->w, p->i * p->h);
			if (p->map[p->i][p->j] == 'E')
				mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img4,
					p->j * p->w, p->i * p->h);
			if (p->map[p->i][p->j] == 'P')
				mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->img5,
					p->j * p->w, p->i * p->h);
			p->j++;
		}
		p->i++;
	}
}
