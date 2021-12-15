
#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int main()
{
    char arr[100];
    cin>>arr;

   for (int x=0; x<strlen(arr); x++)
    {
      putchar(toupper(arr[x]));
    }
cout<<"\n";
    return 0;
    }


