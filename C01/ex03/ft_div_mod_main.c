#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int    main()
{
    int a;
    int b;
    int div;
    int mod;
    int *px;
    int *py;
    px = &div;
    py = &mod;

    a = 10;
    b = 5;
    ft_div_mod(a, b, px, py);
    printf("%d\n", div);
    printf("%d", mod);
}
