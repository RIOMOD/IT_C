#include <stdio.h>

int main()
{
    FILE *f = fopen("bt01.txt", "r");
    char c = fgetc(f);
    printf("%c", c);
    fclose(f);
    return 0;
}