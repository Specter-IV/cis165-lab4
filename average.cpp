
#include <iostream>
using namespace std;

int main()
{
    double value1 = 28;
    double value2 = 32;
    double value3 = 37;
    double value4 = 24;
    double value5 = 33;

    double sum = value1 + value2 + value3 + value4 + value5;
    double average = sum / 5;

    cout << "The sum of the five values is: " << sum << endl;
    cout << "The average of these five values is: " << average << endl;

    return 0;
}
