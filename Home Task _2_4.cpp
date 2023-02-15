// TASK 2
/*
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream ifs("C:\\Users\\User\\Desktop\\1_f_.txt");

    std::string cur_str, max_str;

    while (std::getline(ifs, cur_str))
    {
        if (cur_str.size() > max_str.size())
            max_str = cur_str;
    }

    std::cout << "Max size: " << max_str.size() << std::endl;

    return 0;
} */

// TASK 4
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string buffer, text, word; 
    cout << "Искомое слово: "; 
    cin >> word;

    ifstream in("C:\\Users\\User\\Desktop\\1_f_.txt"); 
    while (in >> buffer) 
    {
        if (buffer == word)
        {
            cout << "Текст после заданого слова: ";
            cin.ignore(); 
            getline(cin, buffer);

            ofstream out("C:\\Users\\User\\Desktop\\2_f_.txt"); 
            out << text << buffer;
        }
        else
        {
            text += buffer;
            text += '\n';
        }
    }

    return 0;
}
