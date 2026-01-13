#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
void intitailize(struct Rectangle *r, int l , int b){
    r-> length = l;
    r -> breadth = b;
}

int area(struct Rectangle r){
    return r.length * r.breadth;
}

int peri(struct Rectangle r){
    return 2*(r.length + r.breadth);
}



int main()
{
    Rectangle r = {0,0};
    // rest would be same man
    return 0;
}


// now i can just write them as a class and modules and a constructor too cool do keep in mind private and public element in struct everything is public 