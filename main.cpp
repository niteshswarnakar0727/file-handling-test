#include<iostream>
#include<fstream>
#include<windows.h>

using namespace std;

int main()
{
    char name[100];
    cout<<"Enter your name : "<<endl;
    cin.getline(name,100);
    ofstream ofile;
    ofile.open("hello.dat",ios::binary);
    ofile<<"hello world what\n is going on";
    ofile.close();
    ifstream ifile;
    ifile.open("hello.dat");
    char ch;
    ch=ifile.get();
    while(!ifile.eof())
    {
        cout<<ch;
        Sleep(30);
        ch=ifile.get();
    }
    ifile.close();



    return 0;
}
