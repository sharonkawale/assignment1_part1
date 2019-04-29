#include <stdio.h> 

#include <math.h>
//THIS CODE ENCRYPTS INPUT TEXT AND PRINTS RESULTS TO SCREEN
//THE ENCRYPTION STYLE IS A ROTATION CYPHER

int main() {
   
	FILE *input;   //this is a pointer to the message input text
	input = fopen("input.txt", "r");   //open and read the message text
	
	
	char inchar;
	int k = 24 , en;
	
  
	//this loop goes through each character of the input file until it reaches the end
	while(feof(input) ==0 ) {               
	    
	   
	    fscanf(input, "%c", &inchar);   //read each character and assign to variable
	  
	    
	   if (inchar >= 'A' && inchar <= 'Z') {
	      
	      en = (inchar+k-65)%26 + 65;  //if input is a capital letter proceed to encrypt
	       if (en<65){
	           en = en + 26;
	       }
	       
	          printf("%c", en); //c changes the number to a character
     } 

	       
	  else if (inchar >= 'a' && inchar <= 'z') {
	      inchar = inchar - 32;             //if input is lower case, make it uppercase and then proceed to encyppt 
	      en = (inchar+k-65 )%26 + 65;
	      if (en < 65){                   
	          en = en + 26;
	      }
	      
	     
	          printf("%c", en); }
	     
	    
	    else {
	   
	   printf("%c", inchar);  }
	    
	}
	
	
	return 0;
}
