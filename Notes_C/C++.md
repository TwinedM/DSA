# Notes for the course (revise every sunday)

1) chapter 1 - C++ revision

Arrays - Collection of more than 1 data  (type of array data should be the same).
Array_Initialisation: 
at runtime the size of an array is static
example :
    int a[5] = {1,2,3,4,5} // this is static
    5 elements each of 4 byte hence 20 bytes if the address of 1st element starts from 100 
    then the address increments at 4 bytes each

Calc of address
i = 2 
B + i * sizeof(data type) // time taken 1 (constant type) = O(1)
100 + 2*4 
= 108

main Drawback of static declaration is that space gets wasted if we initialize a large array

 
b. structures - we can define our own data type 

struct Rect{
    int length;
    int breadth;
}
int main (){
    stuct rectangle r;
    struct rectngle r = {10,5}
    r.length = 15;
}

 c. Padding 
     struct rectangle{
        int l; 4 bytes 
        int b; 4 bytes
        char x;  1 byte 
     }
however it wont show 9 bytes but would instead show 12 ; the compiler allocates 12 bytes for the whole structre so as to make things easier for it this is known as padding.

d. Pointer - address variable used to store data itself
these are used to access heap 
used to acccess stack resources (monitor , speaker etc etc)
paramter passing code also

Accessing heap using pointer
int main(){
    int *p;
    p = (int*)malloc(n*sizeof(data type));
    or 
    p = new int();
}
// remember to always delete the memory allocated in heap to prevent memory leak (loosing track of the pointers)

# pointer to a structre
struct rectangle{
    int length;
    int breadth;
}
int main(){
    struct rectangle r = {10,5};
    struct Rectangle *p = &r;
    r.length = 15;
    (*p).length = 20;
    p -> length = 20;
    p = (struct Rectangle *) malloc (sizeof(struct Rectangle));
    p -> length = 10;
    p -> breadth = 5;  
}

# c. functions
main advantage of functions is that it has its own activation record + it reduces redundancy.
it gets deleted after doing its task.


    Parameter Passing Methods
    1) Pass by value: Used when fucntion should process something and return result, actual parameters are not modified due to formal parameters.
    A simple copy is generated in the activation record when the function is called which is then processed to store the final result in the variable

    2) Call by address: Used when the function should process something and return more than one value , when we need to work on actual parameters, work on variables like structures or objects
    code:
    void swap(int *x , int *y){
        int temp;
        temp = *x;
        x* = *y;
        *y = temp;
    }
    int main(){
        int a,b;
        a = 10;
        b = 20;
        swap(&a , &b);
        printf(bla bla);
    }

    3) Call by reference : Not advisable to use , the function may become inline , code in notes just pass the address in the form of &a etc etc.

    4) Array as a parameter: 
    code :
    void fun(int A[] or int * A , int n){   // this is always passed by address
        int i;
        for (i = 0 ; i < n ; i++){
            printf(bla bla);  
        }
    }
    int main(){
        int A[5] = {2,4,6,8,10};
        fun(A,5);
        return 0;
    }

    5) struct as a parameter:
    struct Rectangle{
        int length;
        int breadth;
    }
    int area (struct Rectangle r1){
        return r1.length * r1.breadth;
    }
    void change length(struct Rectangle *p , int n){ // this is for making changes to length 
        p -> length = n;
    }
    int main(){
        struct Rectangle r = {10,5};
        printf(bla bla)
    }

    there are sturct function to class constructors and template functions too all are in the practical section this end the C++ notes