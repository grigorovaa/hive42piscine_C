/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:42:09 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/13 09:12:47 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i * i <= (unsigned int)nb)
	{
		if (i * i == (unsigned int)nb)
			return (i);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	int	num;

	num = ft_sqrt(81);
	printf("%i\n",num);
	return (0);
}
*/
