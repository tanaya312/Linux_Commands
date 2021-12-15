#include <iostream>
#include <iomanip>
#include <cmath>
const double PI = 3.14159265;
using namespace std;

int main()
{
    double degrees, radians;

    cout << "Angle in degrees: ";
    cin >> degrees;
    radians = degrees * PI / 180.0;
    cout  << setprecision(3)<<">>"<< 1/cos(radians) << endl;
    return 0;
}

