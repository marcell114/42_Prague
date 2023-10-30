/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:32:04 by mpal              #+#    #+#             */
/*   Updated: 2023/09/27 12:56:46 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (a != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	aa;
	int	ab;
	int	ac;

	aa = 0;
	while (aa <= 7)
	{
		ab = aa + 1;
		while (ab <= 8)
		{
			ac = ab + 1;
			while (ac <= 9)
			{
				ft_print(aa, ab, ac);
				ac++;
			}
			ab++;
		}
		aa++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
