/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:37 by mpal              #+#    #+#             */
/*   Updated: 2023/09/20 13:48:37 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

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
	int		i;
	int		j;
	int		print;
	char	*temp;
	char	result;

	i = 1;
	while (i != (argc - 1))
	{
		j = i + 1;
		while (j < (argc))
		{
			result = ft_strcmp(argv[i], argv[j]);
			if (result > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	print = 1;
	while (print < argc)
	{
		write(1, argv[print], char_counter(argv[print]));
		write(1, "\n", 1);
		print++;
	}
}
