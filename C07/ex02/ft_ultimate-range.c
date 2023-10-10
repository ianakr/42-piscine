/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate-range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:44:16 by ikozlova          #+#    #+#             */
/*   Updated: 2023/10/10 17:30:57 by ikozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	*buffer;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	length = max - min;
	buffer = malloc(length * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < length)
	{
		buffer[i] = min + i;
		i++;
	}
	return (length);
}
/*int	main(void)
{
	int	min = 3;
	int	max = 10;
	int	*tab;
	int	size;
	int	i = 0;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
