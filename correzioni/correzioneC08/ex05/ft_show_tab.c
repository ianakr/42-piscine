/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astarran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:42:07 by astarran          #+#    #+#             */
/*   Updated: 2023/10/10 16:00:20 by astarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aux(int n, int negative, int iter)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
		n = -n;
	if (n == 0)
	{
		if (!iter)
			write(1, "0", 1);
		if (negative)
			write(1, "-", 1);
		return ;
	}
	aux(n / 10, negative, iter + 1);
	c = '0' + n % 10;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	aux(nb, nb < 0, 0);
}

void	print_str(char *s)
{
	int		i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(1, s + i, 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int					i;
	struct s_stock_str	temp;

	i = 0;
	temp = par[i];
	while (temp.str)
	{
		print_str(temp.str);
		write(1, "\n", 1);
		ft_putnbr(temp.size);
		write(1, "\n", 1);
		print_str(temp.copy);
		write(1, "\n", 1);
		i++;
		temp = par[i];
	}
}
