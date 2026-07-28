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

        void reverseArray(vector<int>& arr){    // if i wanna put a damned array in my func then use the vector stl
            int p1 = 0; // i can also use the reverse function and it works on the same concept as this 
            int p2 = arr.size()-1;
            while(p1<p2) {
                swap(arr[p1],arr[p2]);
                p1++;
                p2--;
            }
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