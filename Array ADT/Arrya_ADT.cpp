#include <stdio.h>
#include <stdlib.h>
struct Array
{
int *A;
int size;
int length;

};

void Display(struct Array arr){
    int i ;
    printf("Elements are");
    for(i = 0 ; i<arr.length ; i++)
        printf("%d" , arr.A[i]);

}



int main(){
    struct Array arr;
    int n,i;
    printf("Enter number of elements");
    scanf("%d" , &arr.size);
    arr.A = (int*)malloc(arr.size*sizeof(int));
    arr.length = 0 ;

    printf("enter the number of numbers");
    scanf("%d" , &n);
    for(i = 0 ; i<n ; i++)
        scanf("%d",&arr.A[i]);
    arr.length = n;

    Display(arr);


    return 0;
}