/*find the rations of the array list , positive numbers, negative and zeroes*/

void plus_and_minus (int n; int *array)
{
    float minus  = 0;
    float plus   = 0;
    float zeroes = 0;
    int array_size= n;

    while (array_size--){
        if(*array > 0) plus++
        else
        if(*array < 0) minus++;
        else
            zeroes++;
    
    }


    printf("%0.6f\n",plus/n);
    printf("%0.6f\n",minus/n);
    printf("%0.6f\n",zeroes/n);

}