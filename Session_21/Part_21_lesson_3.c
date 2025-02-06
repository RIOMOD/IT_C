#include <stdio.h>
#include <stdlib.h>
int main(){
	system ("color a");
    FILE *f = fopen("bt01.txt", "a");
    char str[100];
    printf("Nhâp chuỗi: ");
    fgets(str, 100, stdin);
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}