#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstring>
#include<stdlib.h>
#include "function.h"
using namespace std;
void sign_up()
{
    string name,pass;
    cout<<"enter your details : "<<endl;
    cout<<"1. User Name: ";
    cin>>name;
    cout<<"Password : ";
    cin>>pass;

    fstream fout;
    fout.open("data1.txt",ios::out);
    fout<<name<<' '<<pass;
    fout.close();
    cout<<endl<<"You have successfully created account ";
    getch();

}
void login()
{
    int flag=0;
    string name, pass, name1, pass1;
    cout<<"enter your details : "<<endl;
    cout<<"1. User Name: ";
    cin>>name;
    cout<<"Password : ";
    cin>>pass;
    ifstream fin;
    fin.open("data1.txt",ios::in);
    while(fin>>name1>>pass1)
    {

        if(name == name1 && pass == pass1)
        {
            flag=1;
        }
    }
    fin.close();
    if(flag==1)
    {
        cout<<"Your account has been logged in ";
        getch();
    }
    else
    {
        cout<<"Your details are not correct";
        cout<<endl<<"To login type this"<<endl;
        cout<<endl<<"User name : "<<name1;
        cout<<endl<<"Password : "<<pass1;
        getch();
    }


}


function::function()
{
    //ctor
}

function::~function()
{
    //dtor
}
