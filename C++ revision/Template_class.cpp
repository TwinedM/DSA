 #include <iostream>
using namespace std;
/*
class Arithmetic{
    private:
    int a ;
    int b ;
    public:
        Arithmetic(int a,int b){
            this ->a = a;  // pointer to current object in c++
            this ->b = b;
        }
        int add(){
            int c;
            c=a+b;
            return c;
        }
        int sub(){
            int c;
            c=a-b;
            return c;
        }
};

int main(){
    Arithmetic ar(10,5);
    cout << "Add" << ar.add() <<endl;
    cout << "Sub" << ar.sub() << endl;
    return 0;
} */

// declaration outside the class using scope declaration

/* class Arithmetic{
    private:
    int a ;
    int b ;
    public:
        Arithmetic(int a,int b);
        int add();
        int sub();
};

    Arithmetic::Arithmetic(int a,int b){
        this->a=a;
        this->b=b;
    }
    int Arithmetic::add(){
        int c;
        c= a+b;
        return c;
    }
    int Arithmetic::sub(){
        int c;
        c = a-b;
        return c;
    }

    int main(){
        Arithmetic ar(15,10);
        cout << "add" << ar.add()<< endl;
        return 0;
    } */

// template class can accept any data type cool can i add struct in this?? yes
template <class T>
class Arithmetic{
private:
T a ;
T b ;
public:
    Arithmetic(T a,T b);
    int add();
    int sub();
};
template <class T>
Arithmetic <T>::Arithmetic(T a,T b){
    this->a=a;
    this->b=b;
}
template <class T>
int Arithmetic<T>::add(){
    T c;
    c= a+b;
    return c;
}
template <class T>
int Arithmetic<T>::sub(){
    T c;
    c = a-b;
    return c;
}

int main(){
    Arithmetic<int> ar(15,10);
    cout << "add" << ar.add()<< endl;
    return 0;
}