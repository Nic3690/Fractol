# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfurlani <nfurlani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 13:25:12 by nfurlani          #+#    #+#              #
#    Updated: 2023/06/29 13:11:05 by nfurlani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATH_SRC =			./sources/
PATH_MLX =			./mlx/
PATH_OBJS =			./objects/

MLX = $(PATH_MLX)libmlx.dylib
NAME = fractol

FILES = $(PATH_SRC)pixelput.c $(PATH_SRC)colors.c $(PATH_SRC)fractol.c $(PATH_SRC)functions.c $(PATH_SRC)parameters.c \
		$(PATH_SRC)atof.c $(PATH_SRC)mandelbrotcolors.c $(PATH_SRC)juliacolors.c $(PATH_SRC)kholecolors.c $(PATH_SRC)strings.c
OBJS = $(patsubst $(PATH_SRC)%.c, $(PATH_OBJS)%.o, $(FILES))

CC = gcc
CFLAGS = -Wextra -Werror -Wall -o2
MLXFLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C $(PATH_MLX)
	@$(CC) $(CFLAGS) $(MLXFLAGS) $(OBJS) $(MLX) -o $(NAME)
	@mv $(MLX) ./

$(PATH_OBJS)%.o:	$(PATH_SRC)%.c
	@mkdir -p $(PATH_OBJS)
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

clean:
	$(RM) $(PATH_OBJS)
	@rm -rf libmlx.dylib

fclean: clean
	make clean -C $(PATH_MLX)
	$(RM) $(NAME)

re: fclean all

norme: 
	norminette $(PATH_SRC)

.PHONY: re all fclean clean norme
