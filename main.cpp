#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{

    string path = "out.txt";
    ofstream fout;
    fout.open(path);

        if (!fout.is_open()) 
            {
                cout << "Faild to open file.Error:U suck in code" << endl;
            }
        else 
        {
            fout << "file has been open ";
        }

        fout.close();

    return 0;

}