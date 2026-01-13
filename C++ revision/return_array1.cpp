#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int * fun(int n){
    int *p;
    int i;
    p = (int *)malloc(n*sizeof(int));
    for (i = 0 ; i < n ; i++){
        cin >> p[i];
    }
    return(p);
}

int main(){
    int *A;
    int i;
    int z = 5;
    A = fun(z);
    for (i = 0 ; i < z ; i++){
        cout << A[i] << endl;
    }
    delete A;
    return 0;
}