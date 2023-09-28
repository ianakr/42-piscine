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

int    main()
{
    printf("%d", ft_str_is_alpha("abcdefghijkl"));
    printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
    printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
}
