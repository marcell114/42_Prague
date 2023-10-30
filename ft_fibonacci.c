/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:40:24 by mpal              #+#    #+#             */
/*   Updated: 2023/09/19 17:00:38 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if ((index == 0) || (index == 1))
	{
		return (index);
	}
	else
	{
		return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
	}
}
/*
int	main(void)
{
	printf ("%d\n", ft_fibonacci(10));
}*/
