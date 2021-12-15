// Multiplication n_mul
#include<iostream>
using namespace std;
int main()
{
float mul = 1;
cout << "Enter numbers:" << endl;
float i = 1;
while (true)
    {
    cin >> i;
    mul =mul*i;

    if (cin.peek() == '\n')
        {
        break;
        }
    }

cout << "Result: " << mul << endl;
return 0;
}
