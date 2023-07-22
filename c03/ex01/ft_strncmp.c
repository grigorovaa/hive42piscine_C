/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:26:29 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/11 15:58:18 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str1[] = {"12345"};
	char	str2[] = {"12345"};
	unsigned int	n  = 10;
		
	if  (ft_strncmp(str1, str2, n) ==  0)
	{
		write(1, "yes", 3);
	}
	else 
	{
		write(1, "no", 2);
	}
	return (0);
}
*/
