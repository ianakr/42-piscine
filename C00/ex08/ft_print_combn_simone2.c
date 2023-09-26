/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:31:20 by ikozlova          #+#    #+#             */
/*   Updated: 2023/09/25 23:03:27 by ikozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// global variables
char	g_characters[10][10];
char	g_combination[10];
int		g_stack[10];

void fillg_characterspace(int n)
{
	int	space;
	int	index;
	int	x;

	space = 11 - n;
	index = 0;
	while (index < n)
	{
		x = 0;
		while (x < space)
		{
			g_characters[index][x] = '0' + index + x;
			x++;
		}
		index++;
	}
}

void	init_stack(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		g_stack[i++] = 0;
	}
}

int	next_char(int n, int space, int index)
{
	int	x;
	int	prev;
	int	i;

	x = g_stack[index]++;
	if (x >= space)
	{
		prev = g_stack[index - 1] - 1;
		i = index;
		while (i < n)
		{
			g_stack[i++] = prev;
		}
		index--;
	}
	else
	{
		if (index == 0 || g_characters[index][x] > g_combination[index - 1])
		{
			g_combination[index] = g_characters[index][x];
			index++;
		}
	}
	return (index);
}

void	findg_combinations(int n)
{
	int	space;
	int	count;
	int	index;

	space = 11 - n;
	count = 0;
	index = 0;
	while (index >= 0)
	{
		if (index < n)
		{
			index = next_char(n, space, index);
		}
		else
		{
			if (count > 0)
				write(1, ", ", 2);
			write(1, g_combination, n);
			index--;
			count++;
		}
	}
}

void	ft_print_combn(int n)
{
	if (0 >= n || n >= 10)
		return ;
	fill_characterspace(n);
	init_stack(n);
	find_combinations(n);
}
