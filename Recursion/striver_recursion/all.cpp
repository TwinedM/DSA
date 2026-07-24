#include <bits/stdc++.h>
using namespace std;


class Solution   {
    public:
        void PrintName(string name , int count , int N){
            if(count == N){
                return;
            }
            cout << name << endl;
            PrintName(name, count+1 , N);
        }
        void PrintNumberForward(int count,int N){
            if(count == N){
                return;
            }
            cout << count;
            
            PrintNumberForward(count + 1 , N);
        }
        void PrintNumberBackward(int count , int N){
            if(N == count){
                return;
            }
            cout << N;

            PrintNumberBackward(count , N-1);
        }
        int SumN(int N){
            if (N==1){
                return 1;
            }
            return N + SumN(N - 1);
        }
        int Factorial(int N){
            if (N==0){
                return 1;
            }
            return N * Factorial(N-1);
        }
        
};


int main() {
    Solution sol;
    int N = 5;
    string name = "Piyush";
    int Fct = sol.Factorial(10);
    cout << Fct ;
    return 0;
}