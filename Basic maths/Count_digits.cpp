#include <bits/stdc++.h>
using namespace std;


int count_digits_brute(int N){
    int count = 0;
    while(N>0){
        N = N/10;
        count = count + 1;
    }
    return count;
}

int count_digits_optim(int N){
    int count = (int)(log10(N)+1);
    return count;
} 

int main() {
    int num = count_digits_brute(10);
    int num2 = count_digits_optim(10);
    cout<<num2;
    return 0;
}