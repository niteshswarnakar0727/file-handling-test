#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstring>
#include<stdlib.h>
#include "function.h"
using namespace std;
void login();
void sign_up();

int main()
{
    system("cls");
    char ch;
    cout<<"-------HELLO GUYS WHAT'S UP ?-------"<<endl;
    cout<<"------1. Login";
    cout<<endl<<"-----2. Sign UP";
    cin>>ch;
    switch(ch)
    {
    case '2':
        sign_up();
        break;
    case '1':
        login();
    default:
        break;
    }



    return 0;
}
