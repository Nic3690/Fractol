/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   juliacolors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurlani <nfurlani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:39:46 by nfurlani          #+#    #+#             */
/*   Updated: 2023/06/05 17:08:55 by nfurlani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_julia_colors1(int *array)
{
	int	i;
	int	color;
	int	deviation;

	i = 0;
	color = 0;
	deviation = 131073;
	while (i < 169)
	{
		if (i < 122)
			array[i] = ft_gradient(&color, deviation);
		if (i >= 122)
			array[i] = ft_gradient_neg(&color, deviation);
		i++;
	}
	array[168] = 0;
	array[1] = 0;
}

void	ft_julia_colors2(int *array)
{
	int	i;
	int	color;
	int	deviation;

	i = 0;
	color = 0;
	deviation = 512;
	while (i < 169)
	{
		if (i < 122)
			array[i] = ft_gradient(&color, deviation);
		if (i >= 122)
			array[i] = ft_gradient_neg(&color, deviation);
		i++;
	}
	array[168] = 0;
	array[1] = 0;
}

void	ft_julia_colors3(int *array)
{
	int	i;
	int	color;
	int	deviation;

	i = 0;
	color = 0;
	deviation = 131584;
	while (i < 169)
	{
		if (i < 122)
			array[i] = ft_gradient(&color, deviation);
		if (i >= 122)
			array[i] = ft_gradient_neg(&color, deviation);
		i++;
	}
	array[168] = 0;
	array[1] = 0;
}

void	ft_julia_colors4(int *array)
{
	int	i;
	int	color;
	int	deviation;

	i = 0;
	color = 0;
	deviation = 65794;
	while (i < 169)
	{
		if (i < 30)
			array[i] = ft_gradient(&color, deviation);
		if (i == 30)
		{
			array[i] = ft_gradient(&color, deviation);
			deviation = 131329;
		}
		if (i <= 100)
			array[i] = ft_gradient(&color, deviation);
		if (i > 100)
			array[i] = ft_gradient_neg(&color, deviation);
		i++;
	}
	array[168] = 0;
	array[1] = 0;
}

void	ft_julia_colors5(int *array)
{
	int	i;
	int	color;
	int	deviation;

	i = 0;
	color = 0;
	deviation = 196608;
	while (i < 169)
	{
		if (i < 30)
			array[i] = ft_gradient(&color, deviation);
		if (i == 30)
		{
			array[i] = ft_gradient(&color, deviation);
			deviation = 771;
		}
		if (i <= 100)
			array[i] = ft_gradient(&color, deviation);
		if (i > 100)
			array[i] = ft_gradient_neg(&color, deviation);
		i++;
	}
	array[168] = 0;
	array[1] = 0;
}
