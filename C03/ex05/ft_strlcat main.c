#include <stdio.h>

// Функция для определения длины строки
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

// Функция для конкатенации строк с ограничением на размер
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int dlen;
    unsigned int slen;

    i = 0;
    j = 0;
    // Находим длину строки dest
    while (dest[j] != '\0')
    {
        j++;
    }
    dlen = j;
    slen = ft_strlen(src);
    // Проверяем особые случаи: если size равно 0 или меньше или равно текущей длине dest,
    // то просто возвращаем длину src плюс size (ограничение)
    if (size == 0 || size <= dlen)
        return (slen + size);
    // Копируем символы из строки src в строку dest с учетом размера
    while (src[i] != '\0' && i < size - dlen - 1)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0'; // Устанавливаем завершающий нулевой символ
    return (dlen + slen); // Возвращаем общую длину результата
}

int main(void)
{
    char src[] = "Born to code";
    char dest[] = "1337 42";

    // Вызываем функцию для конкатенации строк с ограничением на размер 20
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest); // Выводим результат
}
