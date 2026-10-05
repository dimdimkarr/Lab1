#include <locale.h>
#include <stdio.h>

void name()
{
    puts(" * * * * * * * * * * * * * * * * * * * * * * * * *");
    puts(" *                                                *");
    puts(" *    тема: Разработка консольного приложения      *");
    puts(" *           Выполнила Жукова Д.Н.                *");
    puts(" *                                                *");
    puts(" * * * * * * * * * * * * * * * * * * * * * * * * *");
}

void date()
{
    puts(" _   _   _   _   _   _   _   _ ");
    puts(" _| |_| | | |_   _| | | | | |_|");
    puts("|_  |_| |_| |_| |_  |_| |_| |_|");
}

int main()
{
    setlocale(LC_ALL, "RUS");
    
    name();
    date();
    
    return 0;
}