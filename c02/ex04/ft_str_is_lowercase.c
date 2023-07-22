/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:39:58 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/10 15:30:40 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= 'a') && (c <= 'z'))
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

	strcpy(input, "limitless");
	
	if (ft_str_is_lowercase(input) == 1)
	{
		write(1, "yes", 3);	
	}
	else if (ft_str_is_lowercase(input) == 0)
	{
		write(1, "no", 2);
	}
	return (0);
}
*/
