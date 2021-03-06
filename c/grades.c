#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int* gradingStudents(int grades_count, int* grades, int* result_count) {
    
    *result_count = grades_count;
    
    int *rounded= malloc(grades_count*sizeof(int));
    if (rounded == NULL) {
        *result_count = 0;
         return NULL;
    }

    for (int i=0;i<grades_count;i++){

        *(rounded+i) = *(grades+i);

        if(((*(grades+i)%5)) <3 || (*(grades+i) < 38)) {
            *(rounded+i)= *(grades+i) ;
        }
        else{
            *(rounded+i)= *(grades+i)+(5-((*(grades+i)%5))) ;
        }
    }

    return rounded;
}


void main(void){
    int n = 39;
 int grades[39]  = {27,89,56,47,38,12,98,72,85,76,72,56,23,77,25,49,4,52,71,43,11,2,44,10,20,3,90,64,48,31,56,51,70,91,14,25,61,41,0};
int expected[39] = {27,90,56,47,40,12,100,72,85,76,72,56,23,77,25,50,4,52,71,45,11,2,45,10,20,3,90,65,50,31,56,51,70,91,14,25,61,41,0};
int *result;
int result_count;
 result = gradingStudents(n,grades,&result_count);


     for (int i = 0; i < result_count; i++) {
   
        if (*(result+i)!=expected[i]) {
            printf( "[%d][%d]-->[%d] differente\n",*(result+i),expected[i],grades[i] );
        }
  
    }

}