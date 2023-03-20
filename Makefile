NAME = so_long
NAME_B = so_long_b

SRC = check_path.c \
		checker.c \
		file_to_image.c \
		ft_itoa.c \
		ft_split.c \
		ft_strncmp.c \
		ft_strrchr.c \
		get_next_line_utils.c\
		get_next_line.c\
		image_to_win.c \
		main.c\
		moves.c \
		moves2.c \
		position.c \

SRCB = ./bonus/anime_bonus.c \
		./bonus/check_path_bonus.c \
		./bonus/checker_bonus.c \
		./bonus/file_to_image_bonus.c \
		./bonus/ft_animation_bonus.c\
		./bonus/ft_itoa_bonus.c \
		./bonus/ft_split_bonus.c \
		./bonus/ft_strncmp_bonus.c \
		./bonus/ft_strrchr_bonus.c \
		./bonus/get_next_line_bonus.c\
		./bonus/get_next_line_utils_bonus.c\
		./bonus/image_to_win_bonus.c \
		./bonus/main_bonus.c\
		./bonus/moves_bonus.c \
		./bonus/moves2_bonus.c \
		./bonus/position_bonus.c \

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

all : $(NAME) 


$(NAME) : $(OBJ)
	cc  $(CFLAGS )-lmlx -framework OpenGL -framework AppKit $(OBJ) -o $(NAME)

bonus : $(NAME_B) 

$(NAME_B) : $(OBJB)
	cc  $(CFLAGS )-lmlx -framework OpenGL -framework AppKit $(OBJB) -o $(NAME_B)

clean:
	rm -f ${OBJ}
	rm -f ${OBJB}

fclean: clean
	rm -f ${NAME}
	rm -f ${NAME_B}

re: fclean all


