#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(33 <= str[i] && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int    main()
{
    printf("%d", ft_str_is_printable("ABDELKFSCO?I340990%"));
    printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
