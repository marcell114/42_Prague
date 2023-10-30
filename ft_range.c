/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:15:46 by mpal              #+#    #+#             */
/*   Updated: 2023/09/20 14:19:22 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	array = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int	*pointer;
	int	i;

	i = 0;
	pointer = ft_range(20, 29);
	while (i < (10 - 1))
	{
		printf ("%d\n", pointer[i]);
		i++;
	}
	free(pointer);
}*/
