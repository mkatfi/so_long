/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 01:13:41 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/09 12:19:51 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	fcheck_texture(t_so	*p)
{
	if (!p->img1 || !p->img2 || !p->img3 || !p->img4 || !p->img5 || !p->img6
		|| !p->img7 || !p->img8 || !p->img9 || !p->img10)
	{
		write(2, "ERROR ---> : INVALID TEXTURE OF IMAGE", 38);
		exit(1);
	}
}

void	file_image1(t_so *p)
{
	p->img1 = mlx_xpm_file_to_image(p->mlx_ptr, "./textures/space-w.xpm",
			&p->w, &p->h);
	p->img2 = mlx_xpm_file_to_image(p->mlx_ptr, "./textures/space-g.xpm",
			&p->w, &p->h);
	p->img3 = mlx_xpm_file_to_image(p->mlx_ptr, "./textures/collmeet2.xpm",
			&p->w, &p->h);
	p->img4 = mlx_xpm_file_to_image(p->mlx_ptr, "./textures/doorclose.xpm",
			&p->w, &p->h);
	p->img5 = mlx_xpm_file_to_image(p->mlx_ptr, "./textures/play.xpm",
			&p->w, &p->h);
	p->img6 = mlx_xpm_file_to_image(p->mlx_ptr, "./textures/biha_left.xpm",
			&p->w, &p->h);
	p->img7 = mlx_xpm_file_to_image(p->mlx_ptr, "./textures/rightright.xpm",
			&p->w, &p->h);
	p->img8 = mlx_xpm_file_to_image(p->mlx_ptr, "./textures/leftleft.xpm",
			&p->w, &p->h);
	p->img9 = mlx_xpm_file_to_image(p->mlx_ptr, "./textures/amam right.xpm",
			&p->w, &p->h);
	p->img10 = mlx_xpm_file_to_image(p->mlx_ptr, "./textures/dooropen.xpm",
			&p->w, &p->h);
	fcheck_texture(p);
}
