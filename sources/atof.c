/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atof.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurlani <nfurlani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:50:58 by nfurlani          #+#    #+#             */
/*   Updated: 2023/05/31 11:55:00 by nfurlani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		value;

	i = 0;
	sign = 1;
	value = 0;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		value *= 10;
		value += str[i] - 48;
		i++;
	}
	value *= sign;
	return (value);
}

float	ft_atof(const char *str)
{
	int		i;
	int		intero;
	int		decimale;
	int		count;
	float	res;

	i = 0;
	intero = ft_atoi(str);
	while (str[i] != '.' && str[i] != '\0')
		i++;
	i++;
	decimale = ft_atoi(&str[i]);
	count = ft_strlen(&str[i]);
	res = intero + ((float)decimale / pow(10, count));
	if (str[0] == '-')
		res *= -1;
	return (res);
}
