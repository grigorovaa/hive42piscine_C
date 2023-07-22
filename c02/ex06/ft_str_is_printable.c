/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:39:14 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/10 15:47:05 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= ' ' && c <= '~')
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

	strcpy(input, "177");	
	if (ft_str_is_printable(input) == 1)
	{
		write(1, "yes", 3);	
	}
	else if (ft_str_is_printable(input) == 0)
	{
		write(1, "no", 2);
	}
	return (0);
}
*/
