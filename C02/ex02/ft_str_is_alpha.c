/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:12:53 by ikozlova          #+#    #+#             */
/*   Updated: 2023/09/28 11:21:06 by ikozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_cap(char a)
{
	if ('A' <= a && a <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_low(char a)
{
	if ('a' <= a && a <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!ft_cap(str[i]) && !ft_low(str[i]))
			return (0);
		i++;
	}
	return (1);
}
