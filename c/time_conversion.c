#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* timeConversion(char* s, int override_hour) {

    const int format_len = 9;    
    char *format_24h = malloc(9*sizeof(char));
    int hour_12h =((s[0]-'0')*10) + (s[1]-'0'); //atol??
    int hour_24h = 12; 

    if (s == 0) return NULL;
    if (format_24h == 0) return NULL;

    memset(format_24h , 0, format_len);
    memcpy(format_24h,s,8);

    if (s[8] =='A' && hour_12h==12) {hour_24h =0;}else
    if (s[8] =='P' && hour_12h!=12) {hour_24h =12+hour_12h;}else
    if (s[8] =='P' && hour_12h==12) {hour_24h =12;}else
    if (s[8] =='A' && hour_12h!=12) {return format_24h;}
    
   
    format_24h[1] = hour_24h%10 +'0';
    format_24h[0] = (hour_24h/10)+'0';
  
  

    return format_24h;
}

void test_hour(void){
        char *current_time_a = "06:40:45AM"; //19:05:45
        char *out;
        char *s = malloc((1+strlen(current_time_a))*sizeof(char));
        memset(s,0,1+strlen(current_time_a));
        memcpy(s,current_time_a,strlen(current_time_a));
      //  for(int i = 0; i<=13;i++){
    //        s[1]='0';
            out=timeConversion(s,0);
            printf ("[%s]-->[%s] [%d]\r\n", s,out ,0);
            free(out);
    //    }
}

void main(void){

    char *current_time = "00:05:45PM"; //19:05:45

    test_hour();
    //printf ("[%s]-->[%s]\r\n", current_time, timeConversion(current_time));

}