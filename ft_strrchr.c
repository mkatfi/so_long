/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:24:26 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/20 17:46:43 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*k;

	k = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (k[i] == (char)c)
			return (k + i);
		i--;
	}
	return (NULL);
}
