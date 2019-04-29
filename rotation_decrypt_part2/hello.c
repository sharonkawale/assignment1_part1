
//rotation decryption with a given key
//this is the final decyrption code

#include <stdio.h>


int main() {
   
	FILE *input;   //this is a pointer to the encrypted input text
	input = fopen("input.txt", "r");   //open and read the text
	
	
	char inchar;
	int k = 7 , outchar;
	
  
	//this loop goes through each character until it reaches the end
	while(feof(input) ==0 ) {               
	    
	   
	    fscanf(input, "%c", &inchar);   //read each character and assign to variable
	  
	    
	   if (inchar >= 'A' && inchar <= 'Z') {
	      
	      outchar = (inchar-k-65)%26 + 65;  //if input is a capital letter proceed to decrypt
	       if (outchar < 65) {
	           outchar = outchar + 26;
	       }
	          printf("%c", outchar); //c changes the number to a character
     } 

	       
	  else if (inchar >= 'a' && inchar <= 'z') {
	      inchar = inchar - 32;             //if input is lower case, make it uppercase and then proceed to encyppt 
	      outchar = (inchar-k-65 )%26 + 65;
	     
	     if (outchar < 65) {
	           outchar = outchar + 26;
	       }
	          printf("%c", outchar); }
	     
	    
	    else {
	   
	   printf("%c", inchar);  }
	    
	}
	
	
	return 0;
}
