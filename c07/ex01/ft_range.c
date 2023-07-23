/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:33:58 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/19 15:23:48 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	array = malloc((max - min) * sizeof(int));
	if (array == 0)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int	i;
	int	*res;

	i = 0;
	res = ft_range(2, 6);
	while (res[i])
	{
		printf("%i", res[i]);
		i++;
	}
}
*/
