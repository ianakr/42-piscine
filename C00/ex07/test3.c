#include <unistd.h>

void ft_putnbr(int nb)
{
    long n;
    long nb2;
    
    nb2 = nb;
    if (nb2 < 0)
    {
        write(1, "-", 1);
        nb2 = -nb2;
    }
    if (nb2 > 10)
    {
       ft_putnbr(nb2 / 10);
       ft_putnbr(nb2 % 10);
    }
    else if (nb2 < 10)
    {
        n = nb2 + 48;
        write(1, &n, 1);
    }
}

int main() {
    ft_putnbr(0);
    return 0;
}
