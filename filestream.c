#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    FILE* fp;
    char a[] = "hello";
    char* s;

    // 파일 쓰기 프로그램
    fp = fopen("stream.txt", "w"); // write   
    if (fp == NULL) {
        printf("file write error\n");
        return 1;
    }
    fprintf(fp, "%s", a);
    fclose(fp);

    // 파일 읽기 프로그램
    fp = fopen("tream.txt", "r"); // read    
    if (fp == NULL) {
        printf("file read error\n");
        return 1;
    }
    fgets(s, 29, fp);
    printf("%s\n", s);
    fclose(fp);

    return 0;
} 