#include <stdio.h>
#include <string.h>

int removeBlockComment(char* buffer, int i) {
    for (; buffer[i] != '\0'; i++)
        if (buffer[i] == '*' && buffer[i+1] == '/') return i+2;
    return i;
}

int removeLineComment(char* buffer, int i) {
    for (; buffer[i] != '\0'; i++)
        if (buffer[i] == '\n') return i;
    return i;
}

void removeComments(char *buffer, FILE *file) {
    int i = 0;
    while (buffer[i] != '\0') {
        if (buffer[i] == '/' && buffer[i+1] == '*')
            i = removeBlockComment(buffer, i+2);
        else if (buffer[i] == '/' && buffer[i+1] == '/')
            i = removeLineComment(buffer, i+2);
        else putc(buffer[i++], file);
    }
}

int getFileLength(FILE *file) {
    int file_len = 0;
    while (getc(file) != EOF) file_len++;
    rewind(file);
    return file_len;
}

int main() {
    char filename[100];
    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);

    FILE *file;
    file = fopen(filename, "rt");
    if (file == NULL) {
        printf("Arquivo inexistente!\n");
        return 0;
    }

    int file_len = getFileLength(file);

    int i;
    char buffer[file_len+1];
    for (i = 0; i < file_len; i++)
        buffer[i] = getc(file);
    buffer[file_len] = '\0';

    fclose(file);

    file = fopen(filename, "wt");
    removeComments(buffer, file);
    fclose(file);

    return 0;
}
