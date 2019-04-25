/* Hello World program */
//rotation decryption without a given key

#include<stdio.h>

int main()
{
    
    FILE *input;
    input = fopen("decrypt_1.txt", "r");
    
   
  char message;
    int c, d;
    float nth_l[25], i;
    
    
   
    
    
    while(feof(input) == 0){
        fscanf(input, "%c", &message);
     
      c = message;
       //this makes input letters ascii numbers
      o = c - 65;
      
      for(i = 0; i <25; i++) {
        k =  c - 65 - nth_l[i];
      }
    
     if (c >= 65 && c <=90) {
           d = (c-65)%26 + 65 - 26;
           
           
           printf("%c", d);
       }
       else {
           printf("%c", message);
       } }
       
    
    
      
         
     

}
