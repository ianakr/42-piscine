/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astarran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:41:58 by astarran          #+#    #+#             */
/*   Updated: 2023/10/02 16:41:59 by astarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*str_copy(char *s)
{
	int		s_len;
	char	*copy;
	int		i;

	s_len = str_len(s) + 1;
	copy = (char *) malloc(s_len);
	i = 0;
	while (i < s_len)
	{
		copy[i] = s[i];
		i++;
	}
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str			*arr;
	int					i;

	arr = (t_stock_str *) malloc ((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = str_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = str_copy(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
