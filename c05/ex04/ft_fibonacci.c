/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:20:33 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/13 08:36:23 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}

/*
int	main(void)
{
	int	result;
	int num;

	num = 10;
	result = ft_fibonacci(num);
	printf("%i\n", result);
	return (0);
}
*/
