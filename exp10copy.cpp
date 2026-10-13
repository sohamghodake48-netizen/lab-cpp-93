#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void copyFile()
{
    ifstream fin("sample.txt");
    ofstream fout("copy.txt");

    string line;

    if (!fin)
    {
        cout << "Error opening source file!" << endl;
        return;
    }

    if (!fout)
    {
        cout << "Error opening destination file!" << endl;
        return;
    }

    while (getline(fin, line))
    {
        fout << line << endl;
    }

    cout << "File copied successfully!" << endl;

    fin.close();
    fout.close();
}

int main()
{
    ofstream fout;
    string line;

    fout.open("sample.txt", ios::app);

    while (true)
    {
        getline(cin, line);

        if (line == "-1")
            break;

        fout << line << endl;
    }

    fout.close();

    ifstream fin("sample.txt");

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    // Call the copy function
    copyFile();

    return 0;
}