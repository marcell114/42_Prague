/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:18:23 by mpal              #+#    #+#             */
/*   Updated: 2023/09/11 22:03:56 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < size -2)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab [j] > tab [j +1])
			{
				temp = tab [j];
				tab [j] = tab [j +1];
				tab [j +1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
    int myarray[10] = {1, 9, 2, 8, 3, 7, 4, 6, 5, 10};
    ft_sort_int_tab(myarray, 10);
    for(int i = 0; i < 10; i++)
    {
    printf(" => %d ", myarray[i]);
    }
    return (0);
}
*/