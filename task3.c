#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    puts(" _   _   _   _   _   _   _   _ ");
    puts(" _| |_| | | |_   _| | | | | |_| ");
    puts("|_  |_| |_| |_| |_  |_| |_| |_|");

    getchar();
    
    return 0;
}