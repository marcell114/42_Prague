/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulimate_dev_mod.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:53:13 by mpal              #+#    #+#             */
/*   Updated: 2023/09/11 16:19:40 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dev;

	dev = *a;
	*a = *a / *b;
	*b = dev % *b;
}
/*
int main(void)
{
    int x = 10;
    int y = 10;

    ft_ultimate_div_mod(&x, &y);
    printf("Division: %d, Modulus: %d", x, y);
}
*/
