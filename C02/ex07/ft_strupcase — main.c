#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int    main()
{
    char str[] = "abcdefghj";
    printf("%s", ft_strupcase(str));
}
