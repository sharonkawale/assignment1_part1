#include<stdio.h>

int main()
{
    
    //open and read input file
    FILE *input;
    input = fopen("decrypt_1.txt", "r");
    
   //declare variables
  char message;
    int c, d;


    //scan and assign letters
    while(feof(input) == 0){
        fscanf(input, "%c", &message);
     
      c = message;  //make inputs ascii numbers
      
    
     if (c >= 65 && c <=90) {
           d = (c-14-65)%26 + 65  ;  //key = 7
           if (d<65) {
               d = d + 26;
           }
           
           
           printf("%c", d);
       }
       else {
           printf("%c", message);
   }

         }
     }

 



