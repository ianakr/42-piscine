/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:34:09 by ikozlova          #+#    #+#             */
/*   Updated: 2023/10/02 14:39:25 by ikozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int    main()
{
    printf("%d", ft_strcmp("Hello", "Hello1"));
    printf("\n%d", ft_strcmp("Hello", "He"));
    printf("\n%d", ft_strcmp("He", "Hello"));
    printf("\n%d", ft_strcmp("Hello", "Hello"));
}