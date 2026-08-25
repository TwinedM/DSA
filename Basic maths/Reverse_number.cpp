#include <bits/stdc++.h>
using namespace std;


int rev_number_brute(int N){
    int num_rev = 0;
    while(N>0){
        int last_digit = N%10;
        num_rev = num_rev*10 + last_digit;
        N = N/10;
    }
    return num_rev;

}
void palindrome_fxn_made(int N){
    if (rev_number_brute(N) == N){
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }
}
void palindrome(int N){
    int num_rev = 0;
    while(N>0){
        int last_digit = N%10;
        num_rev = last_digit+num_rev*10;
        N= N/10;
    }
    if (num_rev == N){
        cout << "The number is palindrome";
    }
    else{
        cout << "The number is not palindrome";
    }
}

int GCD(int N , int M){
    int factor = 1;
    for(int i = 0 ; i < min(N,M) ; i++){
        if (N%i == 0 && M%i == 0){
            factor = i;
        }
    }
    return factor;

}

int findGcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a; 
        }
    }
    if(a == 0) {
        return b;
    }
    return a;
}


int main(){
    int a = GCD(12,15);
    cout << a;

    
    return 0;
}






                                