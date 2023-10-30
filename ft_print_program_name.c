/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:12:30 by mpal              #+#    #+#             */
/*   Updated: 2023/09/19 18:16:10 by mpal             ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	char	*progname;

	(void)argc;
	progname = argv[0];
	write (1, progname, char_counter(progname));
	write (1, "\n", 1);
	return (0);
}
