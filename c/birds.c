#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* C program for Merge Sort */
#include <stdio.h>
#include <stdlib.h>
 
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

void sort_numbers(int n, int *arr){
     int aux=0;
     for(int i =0; i < n; i++){
         for(int j=i+1;j<(n);j++){
             if(*(arr+j) < *(arr+i)){
                 aux    = *(arr+j);
                 *(arr+j) = *(arr+i);
                 *(arr+i) = aux;
             } 
         }
     }
 }

void print_array(int n, int *arr){
    printf("Array is \n");
    for (int i= 0; i< n;i++){
        printf(" %d ", *(arr+i));

    }
    printf("\n");
}

struct bird_stat_st{
    int type;
    int counter;
};

struct bird_stat_st bpresent={0,0};
struct bird_stat_st bold={0,0};

int migratoryBirds(int arr_count, int* arr) {
        print_array(arr_count,arr);
      mergeSort(arr, 0, arr_count - 1);
//        sort_numbers(arr_count,arr);
         print_array(arr_count,arr);

        bpresent.type = *(arr);
        bold.type = *(arr);
        bpresent.counter = 1;
        bold.counter = 1;

        
        int most_repeated = 0;

        for(int i = 1; i < arr_count; i++){

                 printf("\n");
                 printf("Comp[n==o] [%d ==%d]  new [cn ==co]  [%d=%d] o =%d", 
                        bpresent.type,
                        *(arr+i),
                        bpresent.counter,
                        bold.counter,
                        bold.type);
            if ( bpresent.type == *(arr+i)){
                    bpresent.counter++;
                    
                    printf("++");

            }else{

                // if (bold.counter == 1){
                    
                //     bold.counter = bpresent.counter;
                //     bold.type    =  bpresent.type;

                //     bpresent.counter=1;
                //     bpresent.type = *(arr+i);
                //     continue;
                // }

        
                if ( bold.counter < bpresent.counter ){
                        bold.counter = bpresent.counter;
                        bold.type =  bpresent.type;
                    
                        continue;
                }

                   bpresent.counter=1;
                        bpresent.type = *(arr+i);
                }

                 
            
        }
        if( bold.type == bpresent.type){
            most_repeated =  bpresent.type;
            
            if( bold.type < bpresent.type ){
                bpresent.counter =  bold.counter;
                 most_repeated   =  bold.type;
            }
        }else{
            if (bold.counter > bpresent.counter){
                bpresent.counter = bold.counter;
                bpresent.type    = bold.type;
                most_repeated    = bpresent.type; 
            }else{
                most_repeated = bpresent.type;
            }
        }
        printf("\n found bigger id[%d] f[%d]\n", most_repeated,bpresent.counter );

        return most_repeated;
}


void main(void)
{
    int n= 13;
    int birds[13] = {1,4,4,4,5,3,4,8,1,1,1,56,56};
    int frequency = migratoryBirds(n, birds);
    
    printf("most repeated [%d]\n", frequency);

}