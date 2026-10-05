#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    puts("Моя программа!");
    getchar();
    return 0;
}