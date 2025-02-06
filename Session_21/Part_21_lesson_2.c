#include <stdio.h>
#include <stdlib.h>
int main(){
	system ("color a");
    FILE *f = fopen("bt01.txt", "r");
    char c = fgetc(f);
    printf("%c", c);
    fclose(f);
    return 0;
}