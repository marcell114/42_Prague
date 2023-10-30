/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:21:47 by mpal              #+#    #+#             */
/*   Updated: 2023/09/20 14:44:40 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	counter;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	*range = malloc (size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	counter = min;
	while (counter < max)
	{
		(*range)[counter - min] = counter;
		counter++;
	}
	return (size);
}
/*
int main(void)
{
    int *range;
    int size = ft_ultimate_range(&range, 1, 6);
    if (size == -1) {
        printf("An error occurred\n");
        return 1;
    }
    int i = 0;
    while (i < size) {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");
    free(range);
    return 0;
}*/
