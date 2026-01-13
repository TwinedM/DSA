#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(){
    Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));  // pointer of type void, made in heap
    p->length = 15;
    p->breadth = 5;

    cout << p->length<< endl;
    cout << p->breadth<<endl;

    return 0;

}

