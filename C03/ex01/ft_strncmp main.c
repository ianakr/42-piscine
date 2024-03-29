#include <stdio.h>

// Функция сравнения n символов в строках
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    // Пока не достигнут конец хотя бы одной из строк или не проверено n символов
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        // Сравниваем символы в строках
        if (s1[i] > s2[i])
        {
            return (1); // Возвращаем 1, если s1 > s2
        }
        else if (s1[i] < s2[i])
        {
            return (-1); // Возвращаем -1, если s1 < s2
        }
        i++;
    }
    return (0); // Возвращаем 0, если первые n символов в строках равны
}

int main()
{
    // Вызов функции сравнения первых 8 символов в строках и вывод результата
    printf("%d", ft_strncmp("Hello", "HelloWorld", 8));
}
