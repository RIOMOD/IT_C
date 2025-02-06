#include <stdio.h>
#include <stdlib.h>
int main(){
	system ("color a");
    FILE *f = fopen("bt05.txt", "w");
    int n;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        char str[100];
        printf("Nhap dong thu %d: ", i + 1);
        fgets(str, 100, stdin);
        fprintf(f, "%s", str);
    }
    fclose(f);
    f = fopen("bt05.txt", "r");
    for (int i = 0; i < n; i++)
    {
        char str[1000];
        fgets(str, 1000, f);
        printf("%s", str);
    }
    fclose(f);
    return 0;
}