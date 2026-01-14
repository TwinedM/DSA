// in  a monolithic program i need to write everything in the same function
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int length = 0 , breadth = 0;  // good to initialise the variables smth like cooking in pan but eating in the plate
    printf("enter Length and breadth");
    cin >> length >> breadth;
    int area = length*breadth;
    int peri = 2*(length+breadth);
    printf("Area=%d\nPerimeter=%d\n" , area , peri);
    return 0;
}