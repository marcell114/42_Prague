/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:45:27 by mpal              #+#    #+#             */
/*   Updated: 2023/09/19 17:07:15 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	ft_is_prime(int n)
{
	int	i;

	if (n < 2)
	{
		return (0);
	}
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i = i + 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (true)
	{
		if (ft_is_prime(nb) == true)
		{
			return (nb);
		}
		nb = nb + 1;
	}
}
/*
int	main(void)
{
	printf ("%d\n", ft_find_next_prime(42));
}*/
