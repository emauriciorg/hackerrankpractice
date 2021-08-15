void sort_numbers(int n, int *arr);

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


int count_candles(int candles_count, int *candles){

    int tallest=candles[candles_count-1];
    int count=0;
    int tall= 0;
    for(int i =0; i < candles_count; i++) {
            if (*(candles+i) > *candles){
                count = 0;
            }else{
                count++;
            }
    }
    return count;
}

int birthdayCakeCandles(int candles_count, int* candles) {

   int total_tallest_candle;
 //  sort_numbers(candles_count, candles);
//   tallest = candles[candles_count-1];
   total_tallest_candle = count_candles(candles_count, candles);
    printf("%d\n",total_tallest_candle);
    return total_tallest_candle;
}


