/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:29:41 by gromiti           #+#    #+#             */
/*   Updated: 2023/09/27 13:05:19 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(char a)
{
	if (97 <= a && a <= 122)
		return (1);
	else
		return (0);
}

int	ft_isupper(char a)
{
	if (65 <= a && a <= 90)
		return (1);
	else
		return (0);
}

void	ft_mklow(char *a, int i)
{
	a[i] += 32;
}

void	ft_mkupp(char *a, int i)
{
	a[i] -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	else if (ft_islower(str[i]))
		ft_mkupp(str, i);
	i++;
	while (str[i] != '\0')
	{
		if (!ft_isupper(str[i - 1]))
		{
			if (!ft_islower(str[i - 1]))
			{
				if (!((48 <= str[i - 1]) || !(str[i - 1] <= 57)))
				{
					if (ft_islower(str[i]))
						ft_mkupp(str, i);
				}
			}
		}
		else if (ft_isupper(str[i]))
			ft_mklow(str, i);
		i++;
	}
	return (str);
}
