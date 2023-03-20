#/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:01:47 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/09 12:26:12 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

typedef struct so_lo
{
	char	*buff;
	char	**map;
	char	**map2;
	char	**map3;
	void	*mlx_ptr;
	void	*mlx_win;
	int		w;
	int		h;
	void	*img1;
	void	*img2;
	void	*img3;
	void	*img4;
	void	*img5;
	void	*img6;
	void	*img7;
	void	*img8;
	void	*img9;
	void	*img10;
	int		p_x;
	int		p_y;
	int		coll;
	int		i;
	int		j;
	int		x;
	int		y;
	int		mim;
	int		l;
	int		var;
	void	*img_b1;
	void	*img_b2;
	void	*img_b3;
	int		a;
	int		collmeet;
	int		exit;
	int		play;
	int		b;
}			t_so;

char		*get_next_line(int fd);
char		**ft_split(char const *s, char c);
char		*ft_strjoin(char *s1, char *s2);
int			ft_strchr(char *str, char cbn);
void		*ft_calloc(size_t count, size_t size);
size_t		ft_strlen(const char *s);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *str1, const char *str2);
int			count_word(char const *str, char c);
void		check_path(int pos_x, int pos_y, char **map);
void		check_coll(char **map2);
void		position(t_so *p);
void		ft_up(t_so	*p);
void		ft_up1(t_so	*p);
void		ft_down(t_so	*p);
void		ft_down1(t_so	*p);
void		ft_right(t_so *p);
void		ft_right1(t_so *p);
void		ft_left(t_so *p);
void		ft_left1(t_so *p);
void		file_image1(t_so *p);
void		image_win(t_so *p);
void		movestr(t_so *p);
char		*ft_itoa(int n);
void		collrasin(t_so	*p);
void		check_p01ec(char **str, t_so	*p);
void		check_ber(char	*str);
void		map_area(char	**str);
void		check_2(char	**map);
void		check_1(char **map);
void		pospos(t_so	*p, int x, int y);
void		git(char *srt, t_so *p);
void		checkn(t_so *p);
void		fprint_error(void);
#endif
