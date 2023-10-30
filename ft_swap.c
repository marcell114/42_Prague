/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:22:53 by mpal              #+#    #+#             */
/*   Updated: 2023/09/11 12:33:33 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int main(void)
{
	int x = 24;
	int y = 42;

	printf("before swap: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("after swap: x = %d, y = %d\n", x, y);
	return 0;
}*/
