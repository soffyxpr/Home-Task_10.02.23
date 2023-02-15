#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
#define MAX_NAME 20           
#define MAX_NUMBER 10  
#define sp system("pause")
#define sl setlocale(LC_ALL, "")
using namespace std;
char  b[100] = {};
int Count, a;
char File[] = "C:\\Users\\User\\Desktop\\1_f_.txt";
FILE* F_tel;


void main()
{
    sl;
    srand(time(0));

    char  b[100] = {}, * m = 0, n;
    int l = 0, a = 0, i = 0;

    if ((F_tel = fopen("C:\\Users\\User\\Desktop\\1_f_.txt", "rt")) == NULL)
    {
        puts("Открыть файл не удалось\n");
        exit(1);
    }

    getc(F_tel);
    while (!feof(F_tel))
    {
        m = fgets(b, 100, F_tel);
        a++;
        l += strlen(b);
    }
    fclose(F_tel);
    cout << a << l;
    if ((F_tel = fopen("C:\\Users\\User\\Desktop\\1_f_.txt", "rt")) == NULL)
    {
        puts("Открыть файл не удалось\n");
        exit(1);
    }
    fread(&a, sizeof(a), 1, F_tel);
    for (int i = 0; i < a; i++)
    {
        fread(&b[i], sizeof(b[i]), 1, F_tel);
    }
    fclose(F_tel);

    a--;
    if ((F_tel = fopen("C:\\Users\\User\\Desktop\\2_f_.txt", "rb")) == NULL)
    {
        cerr << "невозмоно изменить файл.\n";
    }
    fwrite(&b[i], sizeof(b), 1, F_tel);

    for (int i = 0; i < a + 1; i++)
        if (b[i] != a)
        {
            fwrite(&b[i], sizeof(b[i]), 1, F_tel);
        }
    fclose(F_tel);
    cout << "успешно удалена" << b << endl;
    sp;
}