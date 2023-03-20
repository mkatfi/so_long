/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:57:43 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/09 12:25:40 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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

void	movestr(t_so *p)
{
	char	*s;
	int		i;

	s = ft_itoa(p->mim);
	i = ft_strlen(s);
	p->mim++;
	write (1, "move ", 5);
	write (1, s, i);
	write (1, "\n", 1);
	free (s);
}

void	fprint_error(void)
{
	write(2, "ERROR\n INVALID NUMBERS OF ARGUMENTS", 36);
	exit(1);
}
