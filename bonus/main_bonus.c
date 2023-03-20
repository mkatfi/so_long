/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:43:17 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/09 12:24:36 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

int	ft(int key, t_so *p)
{
	if (key == 126 && p->map[p->p_x][p->p_y] != '1')
		ft_up(p);
	if (key == 125 && p->map[p->p_x][p->p_y] != '1')
		ft_down(p);
	if (key == 124 && p->map[p->p_x][p->p_y] != '1')
		ft_right(p);
	if (key == 123 && p->map[p->p_x][p->p_y] != '1')
		ft_left(p);
	if (key == 53)
		exit(0);
	return (0);
}

void	checkn(t_so *p)
{
	int	i;

	i = 0;
	while (p->buff[i])
	{
		if (p->buff[i] == '\n' && p->buff[i + 1] == '\n')
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		else if (p->buff[i] == '\n' && p->buff[i + 1] == '\0')
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		else if (p->buff[0] == '\n')
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

int	destroy(t_so *ptr)
{
	(void)ptr;
	exit(0);
}

void	git(char *srt, t_so *p)
{
	int		fd;

	fd = open(srt, O_RDWR);
	if (fd == -1)
		exit(1);
	p->buff = get_next_line(fd);
	p->map = ft_split(p->buff, '\n');
	checkn(p);
	p->map2 = ft_split(p->buff, '\n');
	p->map3 = ft_split(p->buff, '\n');
}

int	main(int ac, char **av)
{
	t_so	*p;

	p = malloc(sizeof(t_so));
	if (ac == 2)
	{
		git(av[1], p);
		check_ber(av[1]);
		p->collmeet = 0;
		p->exit = 0;
		p->play = 0;
		check_p01ec(p->map, p);
		check_1(p->map);
		map_area(p->map);
		position(p);
		check_path(p->p_x, p->p_y, p->map2);
		check_coll(p->map2);
		image_win(p);
		p->var = 0;
		mlx_loop_hook(p->mlx_ptr, animation, p);
		mlx_hook(p->mlx_win, 2, 0, ft, p);
		mlx_hook(p->mlx_win, 17, 0, destroy, p);
		mlx_loop(p->mlx_ptr);
	}
	else
		fprint_error();
}
