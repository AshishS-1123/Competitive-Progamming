#include <iostream>

using namespace std;

int main()
{
    float numerator, denominator;
    cin >> numerator >> denominator;

    string fraction = to_string(numerator / denominator);
    cout << fraction << "\n";
    return 0;
}

