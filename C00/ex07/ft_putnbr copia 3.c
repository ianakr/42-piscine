/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:23:59 by ikozlova          #+#    #+#             */
/*   Updated: 2023/09/25 17:20:38 by ikozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printDigit(int num)
{
	if (num == 0)
	{
		return ;
	}
	printDigit(num / 10);
	ft_putchar('0' + (num % 10));
}

void ft_putnbr(int num)
{
	if (num == 0)
	{
		ft_putchar('0');
		return;
	}
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	printDigit(num);
}
int main()
{
	ft_putnbr(42);
	return 0;
}
