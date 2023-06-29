/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurlani <nfurlani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:57:53 by nfurlani          #+#    #+#             */
/*   Updated: 2023/06/07 16:19:00 by nfurlani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_mandelbrot_function(float x, float y)
{
	int			n;
	t_complex	c;
	t_complex	z;
	t_complex	t;

	n = 0;
	c.r = x;
	c.i = y;
	z.r = c.r;
	z.i = c.i;
	while (n++ <= 169)
	{
		t.r = z.r * z.r - z.i * z.i + c.r;
		t.i = z.r * z.i * 2 + c.i;
		if (z.r * z.r + z.i * z.i > 4)
			break ;
		z.r = t.r;
		z.i = t.i;
	}
	return (n);
}

int	ft_julia_function(float x, float y, t_argv *arg)
{
	int			n;
	t_complex	c;
	t_complex	z;
	t_complex	t;

	n = 0;
	z.r = x;
	z.i = y;
	c.r = ft_atof(arg->argv2);
	c.i = ft_atof(arg->argv3);
	while (n++ <= 169)
	{
		t.r = z.r * z.r - z.i * z.i + c.r;
		t.i = z.r * z.i * 2 + c.i;
		if (z.r * z.r + z.i * z.i > 4)
			break ;
		z.r = t.r;
		z.i = t.i;
	}
	return (n);
}

float	ft_pow3(float n)
{
	return (n * n * n);
}

float	ft_pow4(float n)
{
	return (n * n * n * n);
}

int	ft_khole_function(float x, float y)
{
	int			n;
	t_complex	c;
	t_complex	z;
	float		zx;
	float		zy;

	n = 0;
	c.r = -1.1825;
	c.i = 0;
	z.r = x;
	z.i = y;
	while (n < 169)
	{
		zx = z.r * z.r;
		zy = z.i * z.i;
		if (zx > 4 || zy > 4)
			break ;
		c.i = z.r;
		z.r = zx * zx + zy * zy - 6 * zx * zy + c.r;
		z.i = 4 * zx * c.i * z.i - 4 * c.i * zy * z.i;
		n++;
	}
	return (n);
}
