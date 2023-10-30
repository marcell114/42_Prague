/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:15:38 by mpal              #+#    #+#             */
/*   Updated: 2023/09/19 18:46:31 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_counter(char *progName)
{
	int	i;

	i = 0;
	while (progName[i] != 0)
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		write (1, argv[i], char_counter(argv[i]));
		write (1, "\n", 1);
		i--;
	}
}
