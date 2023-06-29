/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrotcolors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurlani <nfurlani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:36:58 by nfurlani          #+#    #+#             */
/*   Updated: 2023/06/09 18:01:46 by nfurlani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_mandel_colors1(int **array)
{
	int	i;

	i = 0;
	while (i < 13)
	{
		array[i][0] = 1313806;
		array[i][1] = 3939857;
		array[i][2] = 7947025;
		array[i][3] = 9190417;
		array[i][4] = 16123398;
		array[i][5] = 16732190;
		array[i][6] = 16739890;
		array[i][7] = 16750148;
		array[i][8] = 14049029;
		array[i][9] = 16757828;
		array[i][10] = 16764996;
		array[i][11] = 16767556;
		if (i != 12)
			array[i][12] = 16430345;
		i++;
	}
	array[12][12] = 0;
}

void	ft_mandel_colors2(int **array)
{
	int	i;

	i = 0;
	while (i < 13)
	{
		array[i][0] = 15991703;
		array[i][1] = 4712118;
		array[i][2] = 9657855;
		array[i][3] = 10023670;
		array[i][4] = 16762328;
		array[i][5] = 15991703;
		array[i][6] = 4712118;
		array[i][7] = 9657855;
		array[i][8] = 10023670;
		array[i][9] = 16762328;
		array[i][10] = 15991703;
		array[i][11] = 4712118;
		array[i][12] = 9657855;
		i++;
	}
	array[0][0] = 0;
	array[12][12] = 0;
}

void	ft_mandel_colors3(int **array)
{
	int	i;

	i = 0;
	while (i < 13)
	{
		array[i][0] = 69641;
		array[i][1] = 137999;
		array[i][2] = 270354;
		array[i][3] = 340509;
		array[i][4] = 412971;
		array[i][5] = 13153325;
		array[i][6] = 16762624;
		array[i][7] = 13153325;
		array[i][8] = 412971;
		array[i][9] = 340509;
		array[i][10] = 270354;
		array[i][11] = 137999;
		array[i][12] = 69641;
		i++;
	}
	array[0][0] = 0;
	array[12][12] = 0;
}

void	ft_mandel_colors4(int **array)
{
	int	i;

	i = 0;
	while (i < 13)
	{
		array[i][0] = 16711680;
		array[i][1] = 16742912;
		array[i][2] = 16770304;
		array[i][3] = 65280;
		array[i][4] = 255;
		array[i][5] = 7995647;
		array[i][6] = 16711935;
		array[i][7] = 7995647;
		array[i][8] = 255;
		array[i][9] = 65280;
		array[i][10] = 16770304;
		array[i][11] = 16742912;
		array[i][12] = 16711680;
		i++;
	}
	array[0][0] = 0;
	array[12][12] = 0;
}

void	ft_mandel_colors5(int **array)
{
	int	i;

	i = 0;
	while (i < 13)
	{
		array[i][0] = 4013632;
		array[i][1] = 7105908;
		array[i][2] = 10724525;
		array[i][3] = 1132826;
		array[i][4] = 4013632;
		array[i][5] = 7105908;
		array[i][6] = 8400155;
		array[i][7] = 2105376;
		array[i][8] = 8805405;
		array[i][9] = 5846808;
		array[i][10] = 8796701;
		array[i][11] = 2105376;
		array[i][12] = 0;
		i++;
	}
	array[0][0] = 0;
	array[12][12] = 0;
}
