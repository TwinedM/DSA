
#include <iostream>
using namespace std;

class Array
{   public:
    int *A;
    int size;
    int length;
    public:
    Array(){
        length = 0;
        size = 0;
    }
    Array(int s , int l){
        int size = s;
        int length = l ;
    }
    void Display(){
        int i;
        for (i=0 ; i < size ; i++){
            cout << A[i] << endl;
        } 
    }

};

int main(){
    int s , l;
    cout << "Enter size of array";
    cin >> s;
    Array arr(s,0);
    arr.A = new int(s);

    cout << "Enter number elements of the array";
    cin >> l;
    for (int i = 0 ; i < l ; i ++){
        cin >> arr.A[i];
    }
    

    arr.Display();




    return 0;
}
