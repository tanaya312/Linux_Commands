
#include<iostream>
#include<stdio.h>
#include "stdio.h"
#include<fstream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    char fname[20], str[200];
    fstream fp;
    cout<<"Enter the Name of File: ";
    cin>>fname;
    //gets(fname);
    fp.open(fname, fstream::in);
    if(!fp)
    {
        cout<<"\nFile Doesn't Exist!\n";
        cout<<"\nCreating the File...\n";
        fp.open(fname, fstream::out);
        if(!fp)
        {
            cout<<"\nError Occurred while Creating the File!";
            cout<<"\nExiting...";
            return 0;
        }
        else
            cout<<"\nFile Created Successfully!";
    }
    fp.close();
    /*
    fp.open(fname, fstream::out);
    if(!fp)
    {
        cout<<"\nError Occurred while Opening the File!";
        cout<<"\nExiting...";
        return 0;
    }
    cout<<"\nEnter the Data: ";
    cin>>str;
    //gets(str);
    while(strlen(str)>0)
    {
        fp<<str;
        fp<<"\n";
        cin>>str;
        //gets(str);
    }
    cout<<"\nData Written in File successfully!";
    fp.close();
    */
    cout<<endl;
    return 0;
}
