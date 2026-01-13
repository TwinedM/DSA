#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle(){
        length = 0;
        breadth = 0;
    }
    Rectangle(int l , int b){
        length = l ;
        breadth = b ;
    }
    int area(){
        return length*breadth;
    }
    int peri(){
        return 2*(length+breadth);
    }
    void setLength(int l){
        length = l;
    }
    void getBreadth(int b){
        breadth = b;
    }
    ~Rectangle(){
        cout <<"Destructor";
    }
};

int main(){
    int A , P;
    Rectangle r(10,5);
    A = r.area();
    P = r.peri();
    cout << A << P;
    return 0;
    
}