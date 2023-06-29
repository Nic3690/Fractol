/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurlani <nfurlani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:26:10 by nfurlani          #+#    #+#             */
/*   Updated: 2023/06/22 19:42:42 by nfurlani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_commands(int keycode, t_data *img)
{
	if (keycode == 53)
	{
		mlx_destroy_window(img->mlx, img->mlx_win);
		exit(0);
	}
	if (keycode == 124 || keycode == 123 || keycode == 125 || keycode == 126)
		ft_move(keycode, img);
	if (keycode == 18 || keycode == 19 || keycode == 20 || keycode == 21
		|| keycode == 23)
	{
		ft_palette(keycode, img);
		ft_print(img);
	}
	return (0);
}

int	ft_exit(t_data *img)
{
	(void)img;
	exit(0);
	return (0);
}

int	ft_zoom(int button, int mouse_x, int mouse_y, t_data *img)
{
	float	mx;
	float	my;

	mx = (float)(img->r_min + mouse_x * (img->r_max - img->r_min) / (img->w));
	my = (float)(img->i_max - mouse_y * (img->i_max - img->i_min) / (img->h));
	if (button == 4 || button == 1)
		img->zoom = 0.5f;
	else if (button == 5 || button == 2)
		img->zoom = 1.3f;
	img->r_max = mx + ((img->r_max - mx) * img->zoom);
	img->r_min = mx + ((img->r_min - mx) * img->zoom);
	img->i_max = my + ((img->i_max - my) * img->zoom);
	img->i_min = my + ((img->i_min - my) * img->zoom);
	ft_print(img);
	return (0);
}

void	ft_move(int keycode, t_data *img)
{
	if (keycode == 123)
	{
		img->r_max = (img->r_max - 0.1 * (img->r_max - img->r_min));
		img->r_min = (img->r_min - 0.1 * (img->r_max - img->r_min));
	}
	if (keycode == 124)
	{
		img->r_max = (img->r_max + 0.1 * (img->r_max - img->r_min));
		img->r_min = (img->r_min + 0.1 * (img->r_max - img->r_min));
	}
	if (keycode == 125)
	{
		img->i_max = (img->i_max - 0.1 * (img->i_max - img->i_min));
		img->i_min = (img->i_min - 0.1 * (img->i_max - img->i_min));
	}
	if (keycode == 126)
	{
		img->i_max = (img->i_max + 0.1 * (img->i_max - img->i_min));
		img->i_min = (img->i_min + 0.1 * (img->i_max - img->i_min));
	}
	ft_print(img);
}

int	main(int argc, char **argv)
{
	t_data	img;

	if (argc == 4)
	{
		img.arg = malloc(sizeof(t_argv));
		img.arg->argv2 = malloc(ft_strlen(argv[2]) + 1);
		img.arg->argv3 = malloc(ft_strlen(argv[3]) + 1);
		ft_strcpy(img.arg->argv2, argv[2]);
		ft_strcpy(img.arg->argv3, argv[3]);
	}
	img.w = 1000;
	img.h = 1000;
	img.mlx = mlx_init();
	img.mlx_win = mlx_new_window(img.mlx, img.w, img.h, argv[1]);
	ft_reset_img(&img);
	ft_parameters(&img, argv[1]);
	mlx_hook(img.mlx_win, 2, (1L << 0), ft_commands, &img);
	mlx_hook(img.mlx_win, 17, 0, ft_exit, &img);
	mlx_mouse_hook(img.mlx_win, ft_zoom, &img);
	mlx_loop(img.mlx);
}
