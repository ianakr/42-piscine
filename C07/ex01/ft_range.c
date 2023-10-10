/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:21:33 by ikozlova          #+#    #+#             */
/*   Updated: 2023/10/10 16:40:41 by ikozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*buffer;
	int	*d;

	if (min >= max)
		return (0);
	range = max - min;
	buffer = malloc(range * sizeof(int));
	d = buffer;
	if (!d)
		return (0);
	i = 0;
	while (i < range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}
/*int	main(void)
{
	int	min = 3;
	int	max = 10;
	int	*tab;
	int	i = 0;
	int	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
