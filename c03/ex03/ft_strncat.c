/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:30:02 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/11 17:33:21 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	str1[] = {" you there?"};
	char	str2[3] = {"are"};

	char *result = ft_strncat(str2, str1, 7);
	printf("%s\n", result);
	return (0);
}
*/
