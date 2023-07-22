/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 07:50:54 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/13 08:13:51 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}

/*
int main(void)
{
	int	num = 2;
	int	power = 7;
	int	result;

	result = ft_recursive_power(num, power);
	printf("%d\n", result);
	return(0);
}
*/
