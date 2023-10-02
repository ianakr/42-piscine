#include <stdio.h>

// Функция для объединения строк (конкатенации) с ограничением на количество символов
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    // Находим конец строки dest
    while (dest[i] != '\0')
    {
        i++;
    }
    // Копируем до `nb` символов из строки src в строку dest после её конца
    while (j < nb && src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0'; // Устанавливаем завершающий нулевой символ в конце результата
    return (dest); // Возвращаем указатель на dest (с измененным содержимым)
}

int main()
{
    char src[] = "Networkkkkk";
    char dest[] = "42 ";

    // Вызываем функцию для объединения строк с ограничением на 7 символов и выводим результат
    printf("%s", ft_strncat(dest, src, 7));
}
