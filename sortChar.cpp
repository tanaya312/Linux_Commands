#include<bits/stdc++.h>
using namespace std;

bool comparator(string a,string b)
{
    return a<b;
}

int main()
{
    int n=0;
    string arr[100];
    while (true)
    {
    cin >> arr[n];
    n++;

    if (cin.peek() == '\n')
        {
        break;
        }
    }

    printf(">>");

    sort(arr,arr+n,comparator);

       for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


cout<<"\n";
return 0;

}

