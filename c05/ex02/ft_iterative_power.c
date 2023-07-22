/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:45:54 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/13 08:18:43 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		result *= nb;
	return (result);
}

/*
int	main(void)
{
	int	num = 2;
	int	power = 3;
	int	result;

	result = ft_iterative_power(num, power);
	printf("%d\n", result);
	return(0);
}
*/
