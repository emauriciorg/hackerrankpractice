#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



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



int migratoryBirds(int arr_count, int* arr) {
    


        sort_numbers(arr_count,arr);
        int frequency_new = 0;
        int frequency_old = 0;
        int current_bird_type = *(arr);
        int next_bird_type = *(arr);
        int most_repeated = 0;

        for(int i = 0; i < arr_count; i++){

            if (current_bird_type == *(arr+i)){
                   frequency_new++;
                    printf("increasing [%d][%d]\n",current_bird_type,frequency_new);

            }else{

                if ( frequency_old != 0  && (frequency_old > frequency_new) ){
                }
                else{
                    frequency_old = frequency_new;
                    next_bird_type = current_bird_type;
                }

                   frequency_new=0;
                   current_bird_type = *(arr+i);
            }
        }
        if(frequency_old == frequency_new){
            most_repeated = current_bird_type;
            if(next_bird_type <current_bird_type ){
                most_repeated = next_bird_type;
            }
        }
        printf("found bigger id[%d] f[%d]\n", most_repeated,frequency_new );

        return most_repeated;
}


void main(void)
{
    int n= 11;
    int birds[12] = {1, 2, 3 , 4 , 5 , 4 , 3 , 2 , 1 , 3, 4};
    int frequency = migratoryBirds(n, birds);
    
    printf("most repeated [%d]\n", frequency);

}