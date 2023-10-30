/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:55:02 by mpal              #+#    #+#             */
/*   Updated: 2023/09/27 13:55:37 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void	int_to_strs(int nb) 
{
	if (nb < 0) {
		int_to_strs('-');
		nb = -nb;
	}
	if (nb >= 10) {
		int_to_strs(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10) int_to_strs(nb + 48);
}
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char		*str;
	int			i;

	i = 0;
	str = (char *)malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (str == NULL)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *new_str;
	int size;
	char str;
	char copy;
	int i;

	new_str = malloc ((ac + 1)  * sizeof(t_stock_str));
	if (new_str == NULL)
    {
        return (NULL);
    }
	i = 0;
	while (i < ac)
	{
		new_str[i].size = ft_strlen(av[i]);
		new_str[i].str = av[i];
		new_str[i].copy = ft_strdup(av[i]);
		if(new_str[i].copy == NULL)
		{
				return (NULL);
		}
		i++;
	}
	new_str[ac].str = NULL;
	return (new_str);
}
