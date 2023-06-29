/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurlani <nfurlani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:15:08 by nfurlani          #+#    #+#             */
/*   Updated: 2023/06/22 20:30:57 by nfurlani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_string(t_data *img)
{
	int	x;
	int	y;

	x = 75;
	y = 75;
	if (img->name == 1)
		ft_string_mandelbrot(img, x, y);
	if (img->name == 2)
		ft_string_julia(img, x, y);
	if (img->name == 3)
		ft_string_khole(img, x, y);
}

void	ft_string_mandelbrot(t_data *img, int x, int y)
{
	if (img->palette == 1)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 16123398, "Volcano");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 16123398, CONTROLS);
	}
	if (img->palette == 2)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 4712118, "Unicorn");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 4712118, CONTROLS);
	}
	if (img->palette == 3)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 412971, "Australia");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 412971, CONTROLS);
	}
	if (img->palette == 4)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 16711935, "Pride");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 16711935, CONTROLS);
	}
	if (img->palette == 5)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 10724525, "Steampunk");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 10724525, CONTROLS);
	}
}

void	ft_string_julia(t_data *img, int x, int y)
{
	if (img->palette == 1)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 15859833, "Octopus");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 15859833, CONTROLS);
	}
	if (img->palette == 2)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 61952, "Alien");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 61952, CONTROLS);
	}
	if (img->palette == 3)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 15921664, "Starfield");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 15921664, CONTROLS);
	}
	if (img->palette == 4)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 11166850, "Galaxy");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 11166850, CONTROLS);
	}
	if (img->palette == 5)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 16711680, "Christmas");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 16711680, CONTROLS);
	}
}

void	ft_string_khole(t_data *img, int x, int y)
{
	if (img->palette == 1)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 6690915, "Universe");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 6690915, CONTROLS);
	}
	if (img->palette == 2)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 2424576, "Psychedelic");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 2424576, CONTROLS);
	}
	if (img->palette == 3)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 11661055, "Snowflake");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 11661055, CONTROLS);
	}
	if (img->palette == 4)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 16748211, "Candy");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 16748211, CONTROLS);
	}
	if (img->palette == 5)
	{
		mlx_string_put(img->mlx, img->mlx_win, x, y, 3641526, "Earth");
		mlx_string_put(img->mlx, img->mlx_win, 140, 925, 3641526, CONTROLS);
	}
}
