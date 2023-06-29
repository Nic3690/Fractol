/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixelput.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurlani <nfurlani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:44:33 by nfurlani          #+#    #+#             */
/*   Updated: 2023/06/07 16:37:48 by nfurlani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	**ft_array_mandelbrot(t_data *img)
{
	int	**array;
	int	i;

	i = 0;
	array = malloc (sizeof(int *) * 13);
	while (i < 13)
	{
		array[i] = malloc (sizeof(int) * 13);
		i++;
	}
	if (img->palette == 1)
		ft_mandel_colors1(array);
	if (img->palette == 2)
		ft_mandel_colors2(array);
	if (img->palette == 3)
		ft_mandel_colors3(array);
	if (img->palette == 4)
		ft_mandel_colors4(array);
	if (img->palette == 5)
		ft_mandel_colors5(array);
	return (array);
}

int	**ft_array_khole(t_data *img)
{
	int	**array;
	int	i;

	i = 0;
	array = malloc (sizeof(int *) * 13);
	while (i < 13)
	{
		array[i] = malloc (sizeof(int) * 13);
		i++;
	}
	if (img->palette == 1)
		ft_khole_colors1(array);
	if (img->palette == 2)
		ft_khole_colors2(array);
	if (img->palette == 3)
		ft_khole_colors3(array);
	if (img->palette == 4)
		ft_khole_colors4(array);
	if (img->palette == 5)
		ft_khole_colors5(array);
	return (array);
}

int	*ft_array_julia(t_data *img)
{
	int	*array;

	array = malloc (sizeof(int) * 169);
	if (img->palette == 1)
		ft_julia_colors1(array);
	if (img->palette == 2)
		ft_julia_colors2(array);
	if (img->palette == 3)
		ft_julia_colors3(array);
	if (img->palette == 4)
		ft_julia_colors4(array);
	if (img->palette == 5)
		ft_julia_colors5(array);
	return (array);
}

void	ft_colors_mandelbrot(int n, int x, int y, t_data *img)
{
	int	i;
	int	**array;

	i = 0;
	if (img->name == 1)
		array = ft_array_mandelbrot(img);
	if (img->name == 3)
		array = ft_array_khole(img);
	if (n >= 170)
		ft_my_mlx_pixel_put(img, x, y, array[12][12]);
	else
	{
		if (n < 13)
			ft_my_mlx_pixel_put(img, x, y, array[0][0]);
		else
		{
			if (n % 13 == 0 || n % 13 == 12)
				ft_my_mlx_pixel_put(img, x, y, array[1][0]);
			else
				ft_my_mlx_pixel_put(img, x, y, array[n % 13][n % 13]);
		}
	}
	while (i < 13)
		free(array[i++]);
	free(array);
}

void	ft_colors_julia(int n, int x, int y, t_data *img)
{
	int	i;
	int	*array;

	i = 0;
	array = ft_array_julia(img);
	if (n >= 167)
		ft_my_mlx_pixel_put(img, x, y, array[167]);
	else
		ft_my_mlx_pixel_put(img, x, y, array[n]);
	free(array);
}
