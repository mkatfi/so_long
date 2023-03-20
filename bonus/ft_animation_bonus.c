/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animation_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:25:34 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/07 23:27:11 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

void	anime(t_so *ptr, int i, int j)
{
	if (ptr->var == 100)
		ani1(ptr, i, j);
	if (ptr->var == 2000)
		ani2(ptr, i, j);
	if (ptr->var == 3000)
		ani3(ptr, i, j);
	if (ptr->var == 4000)
		ani4(ptr, i, j);
}

int	animation(t_so *ptr)
{
	int	i;
	int	j;

	ptr->var++;
	i = 0;
	while (ptr->map[i])
	{
		j = 0;
		while (ptr->map[i][j])
		{
			if (ptr->map[i][j] == 'C')
			{
				anime(ptr, i, j);
			}
			j++;
		}
		i++;
	}
	if (ptr->var == 6000)
	{
		ptr->var = 0;
	}
	return (0);
}
