/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurlani <nfurlani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:00:36 by nfurlani          #+#    #+#             */
/*   Updated: 2023/06/22 20:28:14 by nfurlani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <math.h>
# include <stdlib.h>

typedef struct s_argv
{
	char	*argv2;
	char	*argv3;
}	t_argv;

typedef struct s_complex
{
	float	r;
	float	i;
}	t_complex;

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		w;
	int		h;
	int		name;
	void	*mlx;
	void	*mlx_win;
	float	r_min;
	float	r_max;
	float	i_min;
	float	i_max;
	float	zoom;
	t_argv	*arg;
	int		palette;
}	t_data;

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

# define CONTROLS "Mouse Click: zoom, unzoom || \
Change colors: 1, 2, 3, 4, 5 || Move Fractol: <, >, ^, v || Exit: esc"

/* fractol.c */
int			ft_commands(int keycode, t_data *img);
int			ft_exit(t_data *img);
void		ft_move(int keycode, t_data *img);
int			ft_zoom(int button, int dx, int dy, t_data *img);

/* parameters.c */
int			ft_strcmp(char *s1, char *s2);
int			ft_name(float x, float y, int name, t_argv *arg);
void		ft_reset_img(t_data *img);
void		ft_print(t_data *img);
void		ft_parameters(t_data *img, char *str);

/* functions.c */
int			ft_mandelbrot_function(float x, float y);
int			ft_julia_function(float x, float y, t_argv *arg);
int			ft_khole_function(float x, float y);

/* pixelput.c */

int			**ft_array_mandelbrot(t_data *img);
int			**ft_array_khole(t_data *img);
int			*ft_array_julia(t_data *img);
void		ft_colors_mandelbrot(int n, int x, int y, t_data *img);
void		ft_colors_julia(int n, int x, int y, t_data *img);

/* colors.c */
int			ft_gradient(int *color, int deviation);
int			ft_gradient_neg(int *color, int deviation);
void		ft_my_mlx_pixel_put(t_data *data, int x, int y, int color);
void		ft_palette(int keycode, t_data *img);
void		ft_graphics(t_data *img, int x, int y, int n);

/* mandelcolors.c */
void		ft_mandel_colors1(int **array);
void		ft_mandel_colors2(int **array);
void		ft_mandel_colors3(int **array);
void		ft_mandel_colors4(int **array);
void		ft_mandel_colors5(int **array);

/* juliacolors.c */
void		ft_julia_colors1(int *array);
void		ft_julia_colors2(int *array);
void		ft_julia_colors3(int *array);
void		ft_julia_colors4(int *array);
void		ft_julia_colors5(int *array);

/* kholecolors.c */
void		ft_khole_colors1(int **array);
void		ft_khole_colors2(int **array);
void		ft_khole_colors3(int **array);
void		ft_khole_colors4(int **array);
void		ft_khole_colors5(int **array);

/* strings.c */
void		ft_string(t_data *img);
void		ft_string_mandelbrot(t_data *img, int x, int y);
void		ft_string_julia(t_data *img, int x, int y);
void		ft_string_khole(t_data *img, int x, int y);

/* atof.c */
void		ft_strcpy(char *dst, const char *src);
int			ft_strlen(const char *str);
int			ft_atoi(const char *str);
float		ft_atof(const char *str);

#endif