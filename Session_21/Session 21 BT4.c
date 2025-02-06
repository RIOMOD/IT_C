#include <stdio.h>
#include <stdlib.h>
int main(){
    system ("color a");
    FILE *f = fopen("bt01.txt", "r");
    char str[100];
    fgets(str, 100, f);
    printf("%s", str);
    fclose(f);
    return 0;
}
