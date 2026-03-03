#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    for (i = 0; i < arr.length ; i++){
        printf("%d",arr.A[i]);
    }
}

void Append(struct Array *arr , int x){
    if(arr->length < arr->size){
        arr->A[arr->length] = x;
    }
}

void Insert(struct Array *arr , int index , int x){
    int i;
    if (index > 0 && index < arr->length ){
        for (i = arr -> length; i > index ; i--)
            arr -> A[i] = arr->A[i-1];
    }
    arr -> A[index] = x;
    arr -> length++;
    
}

int Delete(struct Array *arr , int index){
    int i = index;
    int x = arr -> A[index];
    if (arr -> length < arr -> size){
        for (i ; i< arr -> length ; i++){
            arr -> A[i] = arr -> A[i+1];
        }
        arr -> length--;
    }
}

void swap(int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int TransLinearSearch(struct Array *arr , int key){
    int i;
    for (i = 0 ; i < arr->length ; i++)
        if (key == arr->A[i]){
            swap(&arr->A[i] , &arr->A[i-1]);
            return i;
        }
        return -1;
}

int LinearSearch(struct Array arr , int key){
    int i;
    for (i = 0 ; i < arr.length ; i++)
        if (key == arr.A[i]){
            return i;
        }
        return -1;
}


int BinarySearch(struct Array arr , int key){
    int l = 0 ;
    int m ;
    int h = arr.length - 1;

    while (l<=h){
        m = (l+h)/2;
        if (key == arr.A[m])
            return m;
        else if(key < arr.A[m])
            h = m-1;
        else 
            l = m+1;
    }
}
int RecBinarySearch(struct Array arr , int key , int l , int h){
    int m ;
    while (l<=h){
        m = (l+h)/2;
        if (key == arr.A[m])
            return m;
        else if(key < arr.A[m])
            return RecBinarySearch(arr , key , l , m-1);
        else 
            return RecBinarySearch(arr , key , m+1 , h);
    }
}

int Get(struct Array arr , int index ){
    if ( index>=0 && index < arr.length){
        return arr.A[index];
    }
    return -1;
}

int Set(struct Array *arr , int index , int x){
    if ( index>=0 && index < arr->length)
        arr -> A[index] = x;
}  


int Max(struct Array arr){
    int max = arr.A[0];
    int i;
    for (i = 1;i<arr.length;i++){
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}


int Min(struct Array arr){
    int min = arr.A[0];
    int i;
    for (i = 1;i<arr.length;i++){
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int Sum(struct Array arr){
    int s= 0;
    int i;
    for (i = 0 ; i<arr.length ; i++)
        s+=arr.A[i];
    return s;
}

int Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}

void Reverse(struct Array *arr)
{
    int *B;
    int i,j;

    B = (int *)malloc(arr->length*sizeof(int));
    for(i= arr->length-1,j=0;i>=0;i--,j++)
        B[j] = arr -> A[i];
    for (i = 0;i>arr -> length ; i++)
    arr -> A[i] = B[i];
}



int main(){
    struct Array arr = {{2,3,4,5,6},10,5};
    printf("%d\n" , RecBinarySearch(arr , 5 , 0 , arr.length));
    Reverse(&arr);
    Display(arr);
}