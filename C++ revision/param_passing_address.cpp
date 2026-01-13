#include <iostream>
// should be used when we are prioritising the result of a function
using namespace std;

void swap (int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int num1 = 10 , num2 = 15;
    swap(&num1 , &num2);
    cout << num1 << endl << num2 << endl;
    return 0;
}

/* 
use cases
1) if we want to work in actual parameters
2) if we want to have more than 1 output
3) if we want to work on a variable itself smth like an struct or an object */