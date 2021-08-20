#include <stdint.h>
#include <stdio.h>


char *convert_number_to_text(int number){
    char  *number_text[] = {"zero"  ,"one"  , "two", "three",
                             "four" ,"five" ,"six" , "seven",
                             "eight","nine" };

    if (number>10 && number<0) {
        return number_text[0];
    }
    
    return number_text[number];
}

void main (void){
    int a =8;
//    printf("Type number \n");
  //  sccanf(a,"%d\n");
    for (int i = 0; i<9;i++){
        printf("converter [%d][%s]\r\n", i,convert_number_to_text(i));
    }

}