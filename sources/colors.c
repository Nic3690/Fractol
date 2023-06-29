/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurlani <nfurlani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:32:47 by nfurlani          #+#    #+#             */
/*   Updated: 2023/06/22 16:18:22 by nfurlani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_gradient(int *color, int deviation)
{
	*color += deviation;
	return (*color);
}

int	ft_gradient_neg(int *color, int deviation)
{
	*color -= deviation;
	return (*color);
}

void	ft_my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	ft_palette(int keycode, t_data *img)
{
	if (keycode == 18)
		img->palette = 1;
	if (keycode == 19)
		img->palette = 2;
	if (keycode == 20)
		img->palette = 3;
	if (keycode == 21)
		img->palette = 4;
	if (keycode == 23)
		img->palette = 5;
}

void	ft_graphics(t_data *img, int x, int y, int n)
{
	if (img->name == 1 || img->name == 3)
		ft_colors_mandelbrot(n, x, y, img);
	if (img->name == 2)
		ft_colors_julia(n, x, y, img);
}
