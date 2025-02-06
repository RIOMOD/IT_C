#include <stdio.h>
#include <stdlib.h>
int main(){
    system("color a");
    char str[1000];
    printf("Nhap chuoi: ");
    fgets(str, 1000, stdin);
    FILE *f = fopen("bt01.txt", "w");
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}
