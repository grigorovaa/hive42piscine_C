/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:32:45 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/05 12:10:18 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 1;
	num2 = 2;
	printf("Before swapping: num1 is %d, num2 is %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("After swapping: num 1 is %d, num2 is %d\n", num1, num2);
	return (0);
}
*/
