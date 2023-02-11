//  Task 2
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define MAXLINE 1024

int main()
{
    FILE* fp;
    char fname[64], s[4096];
    long i, lineno, maxline;

    printf("vvedite imay faila: ");
    scanf("%63s", fname);

    if ((fp = fopen(fname, "r")) == NULL) {
        fprintf(stderr, "fopen: %s: %s\n", fname, strerror(errno));
        return 1;
    }

    i = lineno = maxline = 0;
    while (fgets(s, sizeof(s), fp) != NULL) {
        i++;
        if (strlen(s) > maxline) {
            maxline = strlen(s);
            lineno = i;
        }
    }

    printf("nomer stroki #%ld (%ld).\n", lineno, maxline);
    fclose(fp);
    getchar();
    return 0;
} */

//  C:\\Users\\User\\Desktop\\1_f_.txt
