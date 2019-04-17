#include<stdio.h>
//rotation decryption with a given key


int main()
{
    
    //open and read input file
    FILE *input;
    input = fopen("decrypt_1.txt", "r");
    
   //declare variables
  char message;
    int c, d, k = 0;


    //scan and assign letters
    
   

    
    while((feof(input) == 0)) {
        
        fscanf(input, "%c", &message);
        while( k >=0  && k <=25) {
            printf("message with %d: \n", k);
                
        c = message;  //make inputs ascii numbers
        
        if (c >= 65 && c <=90) {
           d = (c-k-65)%26 + 65  ;  //key = 14
           if (d<65) {
               d = d + 26;  }
           
           printf("%c", d);
       }
       else {
           printf("%c", message); }
           k++; 
   } 
            
        }
        return 0;
    }
    
   
        
         
         
     

 



