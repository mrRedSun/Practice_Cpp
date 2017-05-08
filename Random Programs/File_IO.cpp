#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>

using namespace std;

#define int void

int main(int argc, char const *argv[]) {

    /*ifstream myFile ("file_IO.txt", ios::in);
    string mystring;



    if(myFile.is_open()) {
        while (getline(myFile, mystring))
        {
            cout << myFile.tellg();

            cout << mystring;
        }
    }



    myFile.close();
    return 0; */

    char c[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

    ifstream f ("C:/Users/objec/Downloads/3_Advanced_Grammar_in_Use_-_3rd_Edition.pdf", ios::binary | ios::ate);

    streampos size = f.tellg();

    cout << size;



}
