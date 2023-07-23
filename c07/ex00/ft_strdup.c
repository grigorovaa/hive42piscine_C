/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:30:52 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/17 22:32:16 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*ptr;
	int		length;

	length = 0;
	while (src[length])
		length++;
	dest = malloc(length + 1);
	if (dest == 0)
		return (0);
	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*src;
	char	*dest;
	src = "Goodbye world";
	dest = ft_strdup(src);
	printf("src:  %s %p\n", src, &src);
	printf("dest: %s %p\n", dest, &dest);
	return (0);
}
*/
