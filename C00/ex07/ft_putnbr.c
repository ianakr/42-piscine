#include <unistd.h>

void	ft_putnbr(int num)
{
	if (num == 0)
	{
		char zero = '0';
		write(1, &zero, 1);
		return;
	}
	if (num < 0)
	{
		char minusSing = '-';
		write(1, &minusSing, 1);
		num = -num;
	}
	char buffer[12];
	int length = 0;
	while (num > 0)
	{
		int digit = num % 10;
		buffer[length] = '0' + digit;
		length++;
		num /= 10;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		write(1, &buffer[i], 1);
	}
}
int	main()
{
	ft_putnbr(2147483647);
	return 0;
}
