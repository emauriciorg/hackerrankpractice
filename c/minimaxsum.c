/*

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Example

The minimum sum is  and the maximum sum is . The function prints

Sample Input

1 2 3 4 5
Sample Output

min is  1+2+3+4
max is  2+3+4+5

10 14


For this solution I decide to sort all the numbers so i can just sum the array with an offset of one;
*/

void sort_numbers(int n, int *arr);

void sort_numbers(int n, int *arr){
     int pivot=0;
     for(int i =0; i < n; i++){
         for(int j=i+1;j<(n);j++){
             if(*(arr+j) < *(arr+i)){
                 pivot    = *(arr+j);
                 *(arr+j) = *(arr+i);
                 *(arr+i) = pivot;
             } 
         }
     }
 }

long sum_total(int n, int *arr){
     long total=0;
     for(int i=0;i < n; i++){
         total+=*(arr+i);
     } 
    return total;
}

void miniMaxSum(int arr_count, int* arr) {
        sort_numbers(arr_count,arr);
        long low= sum_total(arr_count,arr);        
        long high= sum_total(arr_count,(arr+1));        
        printf("%ld %ld\n",low, high);
}
