//  C:\\Users\\User\\Desktop\\1_f_.txt
#include <iostream> 
#include <fstream> 
#include <string> 
#include <regex> 
#include <iterator> 

using namespace std;

int main() {
    ifstream fin("C:\\Users\\User\\Desktop\\1_f_.txt");
    if (fin.good()) {
        regex reg("[A-Za-zР-пр-џ]+");
        int k = 0;
        string str, word;
        cout << "Enter a word: ";
        cin >> word;
        while (getline(fin, str)) {
            regex_iterator<string::iterator> it(str.begin(), str.end(), reg);
            regex_iterator<string::iterator> end;
            for (; it != end; ++it) {
                if (it->str() == word) k++;
            }
        }
        if (k) {
            cout << "The given word appears in the text " << k << " time(s)!\n";
        }
        else {
            cout << "No such a word found in the text!\n";
        }
        fin.close();
    }
    else {
        cout << "No file found!\n";
    }
    system("pause");
    return 0;
}