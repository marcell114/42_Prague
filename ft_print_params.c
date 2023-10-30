/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:11:18 by mpal              #+#    #+#             */
/*   Updated: 2023/09/19 18:45:15 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_counter(char *progname)
{
	int	i;

	i = 0;
	while (progname[i] != 0)
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write (1, argv[i], char_counter(argv[i]));
		write (1, "\n", 1);
		i++;
	}
}
