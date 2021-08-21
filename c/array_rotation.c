#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

int* circularArrayRotation(int a_count, int* a, int k, int queries_count, int* queries, int* result_count)
{
        
        rotate(n,a);
}



void print_array(int n, int *arr){
   // printf("Array is \n");
    for (int i= 0; i< n;i++){
        printf(" %d ", *(arr+i));

    }
    printf("\n");
}


void rotate(int n, int *a){
    int aux = 0;
   // print_array(n,a);
    int *b = malloc(n*sizeof(int));

    for(int i =1; i<n; i++){
            *(b+i) = *(a+i-1);
    }
    *(b) = *(a+n-1); 

    for(int i =0; i<n; i++){
            *(a+i) = *(b+i);
    }

/*
    for(int i =n; i>1 ; i--) {
            aux = *(a+i);
            *(a+i)=*(a+i-1);
            *(a+i-1)=(aux);
    }
 */
   // print_array(n,b);
}


void main(){

int array[5] = {1,2,3,4,5};
int queries[3] = {1,2,3};
int result_count = 0;
    rotate(5,array);
    rotate(5,array);


}