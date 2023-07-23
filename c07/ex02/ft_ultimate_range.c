/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:45:58 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/18 18:28:14 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	buffer;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (range == 0)
		return (0);
	buffer = min;
	if (!buffer)
		return (-1);
	i = 0;
	while (buffer < max)
	{
		range[0][i] = buffer;
		buffer++;
		i++;
	}
	return (max - min);
}
/*
int	main(void)
{
	int *ptr;
	int	i;
	int	res;
	int max;
	int min;

	min = 2;
	max = 6;
	i = 0;
	res = ft_ultimate_range(&ptr, min, max);
	while (i < (max-min))
	{
		printf("%i", *(ptr + i));
		i++;
	}
	return (0);
}*/
