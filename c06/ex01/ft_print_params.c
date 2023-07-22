/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:21:02 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/13 15:41:01 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_args(char args)
{
	write(1, &args, 1);
}

int	main(int argc, char **argv)
{
	int	count;
	int	i;
	int	j;

	count = 1;
	if (count < argc)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
				print_args(argv[i][j++]);
			print_args('\n');
			i++;
		}
	}
	return (0);
}
