/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:23:16 by mpal              #+#    #+#             */
/*   Updated: 2023/09/15 10:29:08 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*org_dest;
	unsigned int	i;

	org_dest = dest;
	i = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (i < nb && src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (org_dest);
}
/*
int main(void)
{
    char src[50] = "And this is the SRC";
    char dest[50] = "This is the DEST + ";
    unsigned int nb = 3;
    ft_strncat(dest, src, nb);
    printf("%s", dest);
}
*/