#include <stdint.h>
#include <stdio.h>


// the computer freezes with n=100000 , so , the sort is usseless unless is a merge sort 

int count_candles(int candles_count, int *candles){

    int count=1;
    int tall = *candles;
    
    for(int i =0; i < (candles_count-1); i++) {
            if (*(candles+i) > tall){
                count = 1;
                tall = *(candles+i);
            }
            if (tall ==*(candles+i+1) ){
                count++;
            }
    }
    return count;
}


int main (){
    //int candle[10]= {18,90,90,13,90,75,90,8,90,43};
     //int n = 10;

    //int candle[4]= {3,2,1,3};
    //int n = 4;

    int total = count_candles (n,candle);
    printf("total %d\n",total);
    return 0;
}