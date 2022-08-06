#include <iostream>

using namespace std;

int main() {

    string months[] = { "jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec" };
    int num1;

    cout << "what month number (1 - 12)?: " << endl;
    cin >> num1;

    cout << "your month is: " << months[num1 - 1] << endl;

    return 0;
}