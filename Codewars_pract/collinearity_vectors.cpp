/* #include <stdio.h>
#include <iostream>

using namespace std;

bool collinearity(int x1, int y1, int x2, int y2){
    if (x2 == 0 || y2 == 0){
        throw runtime_error("Division by zero!");
    }
    else{
        int a = x1/x2;
        int b = y1/y2;
        if (a == b){
            return true;
        }
        else {
            return false;
        }
    }
}

int main(){
    bool a;
    try {
        collinearity(1,2,0,0);
        cout << boolalpha << a << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Caught exception: " << e.what() << endl;
    }
    return 0;
} */


// better approach
// satistfy the codn x1y2 - x2y1 == 0

#include <cmath>

bool collinearity(float x1, float y1, float x2, float y2)
{
    // Zero vector is collinear with any vector
    if ((x1 == 0 && y1 == 0) || (x2 == 0 && y2 == 0))
        return true;

    // Cross-product based collinearity check
    return std::fabs(x1 * y2 - y1 * x2) < 1e-6;
}

// this is better 

/* or one could just use the 2nd one itself */