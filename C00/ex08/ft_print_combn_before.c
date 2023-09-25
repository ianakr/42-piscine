/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:31:20 by ikozlova          #+#    #+#             */
/*   Updated: 2023/09/25 21:55:09 by ikozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	characters[10][10];
char	combination[10];
int	stack[10];
void	fillcharacterspace(int n)
{
	int	space = 11 - n;
	int	index = 0;
	while (index < n)
	{
		int x = 0;
		while (x < space)
		{
			characters[index][x] = '0' + index + x;
			x++;
		}
		index++;
	}
}
void	initializestack(int n)
{
	int i = 0;
	while (i < n)
	{
		stack[i++] = 0;
	}
}
void	combinationfound(int n, int count)
{
	if (count > 0) write(1, ", ", 2);
	write(1, combination, n);
}
void	resetstack(int n, int index)
{
	int prev = stack[index-1] - 1;
	int i = index;
	while (i < n)
	{
		stack[i++] = prev;
	}
}
int	addnextchar(int n, int space, int index)
{
	int x = stack[index]++;
	if (x >= space)
	{
		resetstack(n, index);
		index--;
	} else
	{
		if (index == 0 || characters[index][x] > combination[index - 1])
		{
			combination[index] = characters[index][x];
			index++;
		}
	}
	return index;
}
void	findcombinations(int n)
{
	int space = 11 - n;
	int	count = 0;
	int index = 0;
	while (index >= 0)
	{
		if (index < n)
		{
			index = addnextchar(n, space, index);
		} else
		{
			combinationfound(n, count);
			index--;
			count++;
		}
	}
}
void	ft_print_combn(int n)
{
	if (0 >= n || n >= 10) return ;
	fillcharacterspace(n);
	initializestack(n);
	findcombinations(n);
}
int	main()
{
	for (int i = 1; i <= 9; i++)
	{
ft_print_combn(i);
		write(1, "\n", 1);
	}
	return 0 ;
}
