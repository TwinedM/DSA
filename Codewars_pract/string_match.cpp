#include <string>
#include <iostream>
using namespace std;

string neutralise(const string& s1 , const string& s2){
    string A;
    for (int i=0 ; i<s1.length() ; i++){
        return A.append(s1[i],s1.length());
    }
}
int main(){
    string s1 = "++++++";
    string s2 = "------";
    string r = neutralise(s1,s2);
    cout << r;

    return 0;

}