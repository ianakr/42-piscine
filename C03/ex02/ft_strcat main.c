#include <stdio.h>

// Функция для объединения строк (конкатенации)
char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    // Находим конец строки dest
    while (dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    // Копируем символы из строки src в строку dest после её конца
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Устанавливаем завершающий нулевой символ в конце результата
    return (dest); // Возвращаем указатель на dest (с измененным содержимым)
}

int main()
{
    char src[] = "Benguerir";
    char dest[] = "1337 ";
    
    // Вызываем функцию для объединения строк и выводим результат
    printf("%s", ft_strcat(dest, src));
}
