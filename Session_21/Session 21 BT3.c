#include <stdio.h>
int main()
{
    FILE *f = fopen("bt01.txt", "a");
    char str[100];
    printf("Nhâp chuỗi: ");
    fgets(str, 100, stdin);
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}