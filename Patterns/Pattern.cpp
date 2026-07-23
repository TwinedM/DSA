#include <bits/stdc++.h> 
using namespace std ;

void pattern1(int N){
    for (int i = 0; i<N ; i++){
        cout << endl;
        for(int j = 0 ; j < N ; j++){
            cout << "*" ;
        }
    }
}
void pattern2(int N){
    for(int i = 0 ; i < N ; i++){
        cout << endl;
        for(int j = 0 ; j < i ; j++){
            cout << "*";
        }
    }
}
void pattern3(int N){
    for(int i = 0 ; i < N ; i++){
        cout << endl;
        for (int j = 1 ; j < i ; j++){
            cout << j;
        }
    }
}

void pattern4(int N){
    for(int i = 0 ; i<N ; i++){
        cout << endl;
        for (int j = 0 ; j<i ; j++){
            cout << i;
        }
    }
}

void pattern5(int N){
    for(int i = N ; i>0 ; i--){
        cout << endl;
        for (int j = 1 ; j<i ; j++){
            cout << "*";
        }
    }
}

void pattern6(int N){
    for(int i = N ; i>0 ; i--){
        cout << endl;
        for (int j = 1 ; j<i ; j++){
            cout << j;
        }
    }
}

void pattern7(int N){
    for(int i = 0 ; i<N ; i++){
        cout << endl ;
        for(int j = 0 ; j < N-i-1 ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < 2*i+1 ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < N-i-1 ; j++){
            cout << " ";
        }
    }
}
void pattern8(int N) {
    for (int i = 0; i < N; i++) {
 
        for (int j = 0; j < i; j++)
            cout << " ";
 
        for (int j = 0; j < 2 * (N - i) - 1; j++)
            cout << "*";

        cout << endl;
    }
}

void pattern9(int N) {
    for(int i = 0 ; i < N-1 ; i ++) {
        cout << endl ;
        for(int j = 0 ; j < N-i-1 ; j++){
            cout << " ";
        }
        for (int j = 0 ; j < 2*i+1 ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < N-i-1 ; j++){
            cout << " ";}
    }
    for(int i = 0 ; i<N ; i++){
        cout << endl;
        for(int j = 0 ; j<i ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < 2*N-2*i-1; j++){
            cout << "*";
        }
        for(int j = 0 ; j < N-i-1 ; j++){
            cout << " "; 
        }
    }
}
void pattern10(int N){
    for( int i = 0 ; i < N-1 ; i++){
        cout << endl ;
        for (int j = 0; j < 2*i-1 ; j++){
            cout << "*";
        }
    }
    for(int i = 0 ; i<N ; i++){
        cout << endl;
        for(int j = 0 ; j < 2*(N-i)-1 ; j++){
            cout << "*";
        }
    }
}

void pattern11(int N){
    for(int i = 1 ; i <= N ; i++){
        int start = (i % 2 == 0)?0:1;  // use ternary op more
        for (int j = 1; j <= i ; j++)
        {
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}

void pattern12(int N){
    for(int i = 0 ; i <= N ; i++){
        cout << endl;
        for ( int j = 1 ; j < i ; j++){
            cout << j;
        }
        for (int j = 1 ; j<= 2*(N-i);j++){
            cout << " ";
        }
        for(int j = i ; j >= 1 ; j--){
            cout << j;
        }
    }
}

void pattern13(int N){
    int temp = 1;
    for(int i = 0 ; i < N ; i++){
        cout << endl;
        for(int j = 1 ; j < i ; j++){
            cout << temp;
            temp++;
        }
    }
}
void pattern14(int N){
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << char('A'+j);
        }
        cout << endl;
    }
}

    

int main () {
    pattern14(6);
    return 0;
}