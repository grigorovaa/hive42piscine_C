/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:39:56 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/06 17:03:51 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src != '\0')
	{
		*tmp = *src;
		src++;
		tmp++;
	}
	*tmp = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	str[30] = "hello";
	char	str2[30];
	char	*ptr;

	ptr = ft_strcpy(str2, str);
	printf("%s\n", ptr);
	return (0);
}
*/
