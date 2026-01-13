#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// call by value wont change actual variables

struct Rectangle {
    int length;
    int breadth;

};
/*
void fun(struct Rectangle r){
    r.length = 20;
    cout << "Length" << r.length << endl << "Breadth" << r.breadth << endl;

}

int main(){
    struct Rectangle r = {10,5};
    fun(r);
    printf("Length %d \n Breadth %d\n" , r.length , r.breadth);
    return 0;
} */

// call by address can be used to change the actual variables

/* void fun(struct Rectangle *p){
    p->length = 20;
    cout << "Length" << p->length << endl << "Breadth" << p->breadth << endl; 

}
int main()
{
    struct Rectangle r = {10,5};
    fun(&r);
    printf("Length %d \n Breadth %d\n" , r.length , r.breadth);
    return 0;
} */

struct Rectangle *fun()  // address of str
{
    struct Rectangle *p;
    p = new Rectangle;
    p ->length = 15;
    p -> breadth = 7;
    return p;
};

int main(){
    struct Rectangle *ptr = fun();
    cout << "Length"<< ptr->length << "Breadth " << ptr->breadth;
    return 0;


}