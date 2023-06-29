/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parameters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurlani <nfurlani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:32:39 by nfurlani          #+#    #+#             */
/*   Updated: 2023/06/22 17:23:14 by nfurlani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		else
			i++;
	}
	if (s1[i] != s2[i])
		return (0);
	return (1);
}

int	ft_name(float x, float y, int name, t_argv *arg)
{
	int	n;

	n = 0;
	if (name == 1)
		n = ft_mandelbrot_function(x, y);
	if (name == 2)
		n = ft_julia_function(x, y, arg);
	if (name == 3)
		n = ft_khole_function(x, y);
	return (n);
}

void	ft_reset_img(t_data *img)
{
	img->img = mlx_new_image(img->mlx, img->w, img->h);
	img->addr = mlx_get_data_addr(img->img, &img->bits_per_pixel,
			&img->line_length, &img->endian);
}

void	ft_print(t_data *img)
{
	int		x;
	int		y;
	int		n;
	float	r_scale;
	float	i_scale;

	mlx_destroy_image(img->mlx, img->img);
	ft_reset_img(img);
	r_scale = (img->r_max - img->r_min) / (img->w - 1);
	i_scale = (img->i_max - img->i_min) / (img->h - 1);
	x = -1;
	y = -1;
	while (++x < img->w)
	{
		while (++y < img->h)
		{
			n = ft_name(img->r_min + x * r_scale,
					img->i_max - y * i_scale, img->name, img->arg);
			ft_graphics(img, x, y, n);
		}
		y = 0;
	}
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, 0, 0);
	ft_string(img);
}

void	ft_parameters(t_data *img, char *str)
{
	img->r_min = -2;
	img->r_max = 2;
	img->i_min = -2;
	img->i_max = 2;
	if (ft_strcmp(str, "Mandelbrot"))
	{
		img->name = 1;
		img->palette = 1;
	}
	if (ft_strcmp(str, "Julia"))
	{
		img->name = 2;
		img->palette = 1;
	}
	if (ft_strcmp(str, "Khole"))
	{
		img->name = 3;
		img->palette = 1;
	}
	ft_print(img);
}
