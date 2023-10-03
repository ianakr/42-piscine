#include <stdio.h>

// Функция для поиска подстроки в строке
char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (to_find[j] == '\0')
        return (str); // Если подстрока пуста, возвращаем указатель на начало строки
    while (str[i] != '\0')
    {
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
            j++; // Пока символы в строках совпадают, увеличиваем счетчик j
        if (to_find[j] == '\0')
            return (str + i); // Если достигнут конец подстроки, возвращаем указатель на начало найденной подстроки
        i++;
        j = 0; // Сбрасываем счетчик j для проверки следующей позиции в строке str
    }
    return (0); // Если подстрока не найдена, возвращаем нулевой указатель
}

int main()
{
    char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
    char find[] = "piscine";

    // Вызываем функцию для поиска подстроки в строке и выводим результат
    printf("%s", ft_strstr(str, find));
}