/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:46:56 by mpal              #+#    #+#             */
/*   Updated: 2023/09/14 17:56:16 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	else if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else if (n > 0 && s1[0] != '\0' && s2[0] != '\0')
	{
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	}
	return (0);
}
/*
int main(void)
{
    char s1[] = "helloBello";
    char s2[] = "not the same";
    int n = 10;
    printf("%d \n", ft_strncmp(s1, s2, n));
}*/
