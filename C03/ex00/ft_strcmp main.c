#include <stdio.h>

// Функция сравнения строк
int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    // Пока символы в строках равны и не достигнут конец хотя бы одной из строк
    while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
    {
        i++;
    }
    // Возвращаем разницу между символами, которые привели к завершению цикла
    return (s1[i] - s2[i]);
}

int main()
{
    // Вызов функции сравнения строк и вывод результата
    printf("%d", ft_strcmp("Hello", "Hello1"));
    printf("\n%d", ft_strcmp("Hello", "He"));
    printf("\n%d", ft_strcmp("He", "Hello"));
    printf("\n%d", ft_strcmp("Hello", "Hello"));
}
