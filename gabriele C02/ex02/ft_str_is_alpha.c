/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:58:38 by gromiti           #+#    #+#             */
/*   Updated: 2023/09/27 13:00:01 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
