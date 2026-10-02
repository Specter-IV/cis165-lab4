#include <iostream>
using namespace std;

int main()
{
    const double ANNUAL_RATE = 1.5;

    int years1 = 5;
    int years2 = 7;
    int years3 = 10;

    double rise1 = years1 * ANNUAL_RATE;
    double rise2 = years2 * ANNUAL_RATE;
    double rise3 = years3 * ANNUAL_RATE;

    cout << "After 5 years, the ocean will have risen by " << rise1
         << " millimeters." << endl;

    cout << "After 7 years, the ocean will have risen by " << rise2
         << " millimeters." << endl;

    cout << "After 10 years, the ocean will have risen by " << rise3
         << " millimeters." << endl;

    return 0;
}