#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

int    main()
{
    char str[] = "ABCDEFGH";
    printf("%s", ft_strlowcase(str));
}
