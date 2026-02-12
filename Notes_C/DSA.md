Data Structure
Every app deals with some data
The exe and docx both files run in the main memory 
How we organise the data for efficient utilization is known as data structure

Database - Large size data 
Operational data = Data used daily
Legacy data - Historical data in array of discs
The place where data is stroed is wharehouse 

STATIC V/S DYNAMIC MEMORY ALLOCATION
size of main memory is divided in segments 
1 segment - 64 x 1024 = 64 kb


void main(){
    int a; 2 bytes
    float b; 4 bytes
}

the compiler allocated memory to the variables in the stack frame which is known as its activation record the code is kept in main frame;
the memory is divided into 0 to 65535 memory addresses which makes it one segment of 64 kb.

why is stack memory known as stack?
it makes a priority list on the basis of the order of the functions being called the later a function is called the higher is it in the stack list which makes its priority more.

Heap - unorganised memory and it should be treated as a resource ; program directly cannot access heap (we have to use pointer) always delete the pointer and the memory after using in heap.


# TYPES OF DATA STRUCTURE 

1) Physical Datasets - defines how memory is defined 
    a) array - static 
    b) linked list - dynamic , created in heap
2) Logical data str:
    a) stack    // Linear
    b) queues   // Linear 
    c) Trees    // Non Linear 
    d) Graph    // "
    e) Hash Table  //both



# ADT - Abstract Data Type (Hides internal details)
we use it to make our own data types

Operations on a list
1) add
2) remove 
3) search 
more in detail later


# Time and Space complexity

int sum(int A {} , int n){
    int s,i;                        
    s = 0;                      1
    for (i = 0 ;i < n , i++>){  n+1 
        s = s+A[i]              n
    }
    return s;                   O(n)  f(x) = 2n+2
}


# Recursion : better to upload digital notes