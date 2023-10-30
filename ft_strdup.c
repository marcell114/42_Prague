/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:05:24 by mpal              #+#    #+#             */
/*   Updated: 2023/09/20 14:15:21 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new_str;

	new_str = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	ft_strcpy (new_str, src);
	return (new_str);
}
/*
int	main(void)
{
    char *src = "source";
    char *new_str;

    new_str = ft_strdup(src);
    printf("%s\n", new_str);
    free(new_str);
}*/
