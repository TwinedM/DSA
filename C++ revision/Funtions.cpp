#include <iostream>
using namespace std;

int add(int a , int b ){ //prototype and formal params
    int c ;
    c = a+b;
    return c;
}

int main(){
    int num1 = 10 , num_2 = 15, sum;
    sum = add(num1,num_2); // actual parameters
    cout << sum << endl;
    return 0;
}