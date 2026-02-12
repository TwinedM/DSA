#include <stdlib.h>
#include <stdio.h>

int main(){
    int *p , *q;
    p = (int *)malloc(5*sizeof(int));
    p = (int *)malloc(10*sizeof(int));
    p[0] = 1;p[1] = 1;p[2] = 1;p[3] = 1;p[4] = 1;
    
    for ( int i = 0 ; i < 5 ; i ++)
        q[i] = p[i];
    delete (p);
    p = q;
    q = NULL;
    for (int i ; i < 10 ; i++)
        printf("%d" , p[i]);
        
    return 0;
}