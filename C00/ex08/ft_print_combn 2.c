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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *tab, int n)
{
	int	i;
	int	low;

	i = 1;
	low = 1;
	while (i < n)
    {
		if (tab[i - 1] >= tab[i])
		low = 0;
		i++;
    }
	if (low)
    {
		i = 0;
		while (i < n)
		ft_putchar(tab[i++] + 48);
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
        }
    }
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[n];

	i = 0;
	while (i < n)
	tab[i++] = 0;
	while (tab[0] <= (10 - n) && n >= 1 && n < 10)
	{
		print(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
    }
}
