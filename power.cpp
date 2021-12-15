#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    float base, exponent, result;

    cin >> base >> exponent;

    result = pow(base, exponent);

    cout << result;
    
    cout << "\n";
    return 0;
}
