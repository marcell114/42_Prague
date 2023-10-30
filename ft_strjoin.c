/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:23:38 by mpal              #+#    #+#             */
/*   Updated: 2023/09/21 11:17:58 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

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

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	total_length;
	int	sep_length;
	int	i;

	i = 0;
	total_length = 0;
	sep_length = ft_strlen(sep);
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	total_length += (size - 1) * sep_length + 1;
	return (total_length);
}

void	concatenation(char *result, int size, char **strs, char *sep)
{
	int	index;
	int	i;
	int	len;

	index = 0;
	i = 0;
	while (i < size)
	{
		len = ft_strlen(strs[i]);
		ft_strcpy(result + index, strs[i]);
		index += len;
		if (i < size - 1)
		{
			ft_strcpy(result + index, sep);
			index += ft_strlen(sep);
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result != NULL)
		{
			result[0] = '\0';
		}
		return (result);
	}
	total_length = calculate_total_length(size, strs, sep);
	result = (char *)malloc(total_length * sizeof(char));
	if (result != NULL)
	{
		concatenation(result, size, strs, sep);
	}
	return (result);
}
/*
int main() {
	char *strs[] = {"Hello", "42", "this", "is",
	"Prague"};
	char *sep = " => ";
	int size = 5;

	char *concatenated = ft_strjoin(size, strs, sep);

	if (concatenated != NULL) {
		printf("Concatenated String: %s\n", concatenated);
		free(concatenated);
	} else {
		printf("Memory allocation failed.\n");
	}

	return 0;
}*/
