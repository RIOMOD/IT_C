#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct SinhVien {
    int id, age;
    char name[100];
};

int main(){
	system ("color a");
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    struct SinhVien sv[1000];

    for (int i = 0; i < n; i++) {
        printf("Nhap sinh vien thu %d:\n", i + 1);
        printf("Nhap id: ");
        scanf("%d", &sv[i].id);
        getchar();
        printf("Nhap ten: ");
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        int len = strlen(sv[i].name);
        if (len > 0 && sv[i].name[len - 1] == '\n') {
            sv[i].name[len - 1] = '\0';
        }
        printf("Nhap tuoi: ");
        scanf("%d", &sv[i].age);
        getchar();
    }

    FILE *f = fopen("students.txt", "w");
    for (int i = 0; i < n; i++) {
        fprintf(f, "%d %s %d\n", sv[i].id, sv[i].name, sv[i].age);
    }
    fclose(f);
    
    return 0;
}
