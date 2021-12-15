// sum_add
#include<iostream>
using namespace std;
int main()
{
float sum = 0;
//cout << "Enter numbers:" << endl;
float i = 0;
while (true)
    {
    cin >> i;
    sum =sum+i;

    if (cin.peek() == '\n')
        {
        break;
        }
    }

cout << sum << endl;
return 0;
}

