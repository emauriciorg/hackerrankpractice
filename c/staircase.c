/*

Staircase detail

This is a staircase of size :

   #
  ##
 ###
####

Sample Input

6 
Sample Output

     #
    ##
   ###
  ####
 #####
######


My solution relays on the stdio buffer, stacks on the sdio buffer before printing,
other option is to use malloc to declare a buffer of size n, and load that buffer, then
printing it at once
*/
void que_print(int n, char c){
        while(n--){
            printf("%c",c);
        }
}
/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    int i = n;
    while (i--){        
       que_print(i,' ');
       que_print(n-i,'#');
       printf("\n");
    }
}