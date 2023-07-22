/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:40:16 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/12 19:45:23 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return (nb * (ft_recursive_factorial(nb - 1)));
	if (nb == 0)
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	r;

	r = ft_recursive_factorial(4);
	printf("%d\n", r);
	return (0);
}
*/
