#include <iostream>
using namespace std;


/* void fun(int *A , int n){ // this shit is a pointer
     for(int i = 0 ; i<n ; i++){
        cout << A[i] << endl;
     };  // for each loop cannot be used on a pointer
}



int main() {
    int A[] = {2,4,6,8,10};
    int n = 5;
    fun(A , n);
    return 0;
} */


int * fun(int size)
{
    int *p;
    p = new int[size]; // array is created in heap
    for(int i = 0 ; i<size ; i++)
    p[i] = i+1; // elements are added 
    return p;
}

int main(){
    int *ptr , sz = 5; // the ptr is pointing towards the array in heap
    ptr = fun(sz);
    for (int i = 0 ; i < sz ; i++)
    cout << ptr[i] << endl; // we can get the array back
    return 0;
} 