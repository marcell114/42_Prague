/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:24:20 by mpal              #+#    #+#             */
/*   Updated: 2023/09/11 19:17:00 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	temp;

	x = 0;
	y = size -1;
	while (x < y)
	{
		temp = tab[x];
		tab[x] = tab[y];
		tab[y] = temp;
		x++;
		y--;
	}
}
/*
int main(void)
{
    int myarray[10] = {1, 2, 3, 7, 6, 5, 4, 3, 2, 1};

    ft_rev_int_tab(myarray, 10);
    for(int i = 0; i < 10; i++)
    {
    printf(" => %d ", myarray[i]);
    }
}
*/
