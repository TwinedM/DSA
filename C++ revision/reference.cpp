#include <iostream>

using namespace std;

int main() {
    int a = 10; 
    int &r = a; // important to initialise it with declaration
    cout << r << endl;
    r++; // cool
    cout << a;
    return 0;
}