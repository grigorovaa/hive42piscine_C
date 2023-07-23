/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <mgrgoro@student.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:53:52 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/19 15:43:16 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*s;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			s[c++] = sep[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}
/*
int	main(void)
{
	char	**array;

array = (char **)malloc(sizeof(char *) * 4);
array[0] = "cat";
array[1] = "not cat";
array[2] = "also not cat";
array[3] = "help";
	printf("here is our string: %s", ft_strjoin(4, array, " - "));
	return (0);
}
*/
