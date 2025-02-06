#include <stdio.h>

int main()
{
    FILE *f = fopen("bt01.txt", "r");
    char str[100];
    fgets(str, 100, f);
    printf("%s", str);
    fclose(f);
    return 0;
}