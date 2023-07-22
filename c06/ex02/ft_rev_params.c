/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrigoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:21:56 by mgrigoro          #+#    #+#             */
/*   Updated: 2023/07/13 18:38:39 by mgrigoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_rev_args(char args)
{
	write(1, &args, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
				j++;
			write(1, argv[i], j);
			print_rev_args('\n');
			i--;
		}
	}
	return (0);
}
