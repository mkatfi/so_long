/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anime_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:14:56 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/07 23:26:52 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

void	ani1(t_so *ptr, int i, int j)
{
	mlx_put_image_to_window(ptr->mlx_ptr, ptr->mlx_win, ptr->img2,
		j * 40, i * 40);
	mlx_put_image_to_window(ptr->mlx_ptr, ptr->mlx_win, ptr->img3,
		j * 40, i * 40);
}

void	ani2(t_so *ptr, int i, int j)
{
	mlx_put_image_to_window(ptr->mlx_ptr, ptr->mlx_win, ptr->img2,
		j * 40, i * 40);
	mlx_put_image_to_window(ptr->mlx_ptr, ptr->mlx_win, ptr->img_b1,
		j * 40, i * 40);
}

void	ani3(t_so *ptr, int i, int j)
{
	mlx_put_image_to_window(ptr->mlx_ptr, ptr->mlx_win, ptr->img2,
		j * 40, i * 40);
	mlx_put_image_to_window(ptr->mlx_ptr, ptr->mlx_win, ptr->img_b1,
		j * 40, i * 40);
}

void	ani4(t_so *ptr, int i, int j)
{
	mlx_put_image_to_window(ptr->mlx_ptr, ptr->mlx_win, ptr->img2,
		j * 40, i * 40);
	mlx_put_image_to_window(ptr->mlx_ptr, ptr->mlx_win, ptr->img_b3,
		j * 40, i * 40);
}
