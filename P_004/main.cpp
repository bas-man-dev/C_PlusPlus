#include <iostream>
using namespace std;

int main() {

    string line;
    cout << "Enter a line of text: " << endl;
    getline(cin, line);

    cout << "You wrote: " << line << endl;

    return 0;
}