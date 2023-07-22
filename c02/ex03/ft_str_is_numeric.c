/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:10:42 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/10 14:37:45 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= '0') && (c <= '9'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
int	main(void)
{
	char	input[18];

	strcpy(input, "101");

	if (ft_str_is_numeric(input) == 1)
	{
		write(1, "yes", 3);
	}
	else if (ft_str_is_numeric(input) == 0)
	{
		write(1, "no", 2);
	}
	return (0);
}
*/
