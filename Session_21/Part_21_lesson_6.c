#include <stdio.h>
#include <stdlib.h>
int main(){
	system ("color a");
    FILE *f1 = fopen("bt01.txt", "r+");
    FILE *f2 = fopen("bt06.txt", "w+");
    char c = fgetc(f1);
    while (c != EOF)
    {
        fputc(c, f2);
        c = fgetc(f1);
    }
    
    fclose(f1);
    fclose(f2);
    return 0;
}