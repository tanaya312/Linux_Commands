

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
    if (remove(fname) != 0)
		perror("File deletion failed");
	else
		cout << "File deleted successfully";
/*
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
   */
    cout<<endl;
    return 0;
}
