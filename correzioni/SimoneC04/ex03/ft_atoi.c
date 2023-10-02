/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:32:43 by sfazzell          #+#    #+#             */
/*   Updated: 2023/10/02 14:51:58 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	segno(int s, int n)
{
	if (s % 2 == 1)
		return (n * -1);
	else
		return (n);
}

int	isok(char c)
{
	if (!(c >= '0' && c <= '9'))
	{
		if (c != 32 && c != 43 && c != 45)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int	modul(char c)
{
	int	i;

	i = 0;
	if (c == 43)
		i = i + 2;
	else if (c == 45)
		i = i + 1;
	return (i);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sgn;
	int	i;
	int	count;

	count = 0;
	i = 0;
	sgn = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - 48);
			count++;
		}
		if (isok(str[i]) == 1 || (sgn > 0 && str[i] == 32))
			break ;
		if (str[i] == 43 || (str[i] == 45 && count > 0))
			break ;
		sgn += modul(str[i]);
		i++;
	}
	return (segno(sgn, res));
}
