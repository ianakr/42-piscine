/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:49:04 by ikozlova          #+#    #+#             */
/*   Updated: 2023/09/22 12:50:29 by ikozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int i)
{
	int	first;
	int	second;

	if (i < 10)
	{
		print_char('0');
		print_char(i + '0');
	}
	else
	{
		first = i / 10;
		second = i % 10;
		print_char(first + '0');
		print_char(second + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			int_to_char(a);
			print_char(' ');
			int_to_char(b);
			if (a < 98)
			{
				print_char(',');
				print_char(' ');
			}
			b++;
		}
		a++;
	}
}
