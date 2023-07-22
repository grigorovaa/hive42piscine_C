/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:27:16 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/11 15:22:33 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	str1[] = {"124345"};
	char	str2[] = {"12345"};

	if (ft_strcmp(str1, str2) == 0)
	{
		write(1, "identical", 9);
	}
	else 
	{
		write(1, "no", 2);
	}
	return (0);
}
*/
