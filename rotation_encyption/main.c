#include <stdio.h> 


//THIS CODE ENCRYPTS INPUT TEXT AND PRINTS RESULTS TO SCREEN
//THE ENCRYPTION STYLE IS A ROTATION CYPHER

int main() {
   
	FILE *input;   //this is a pointer to the message input text
	input = fopen("input.txt", "r");   //open and read the message text
	
	
	char inchar;
	int k = 0 , outchar;
	
  
	//this loop goes through each character of the input file until it reaches the end
	while(feof(input) ==0 ) {               
	    
	   
	    fscanf(input, "%c", &inchar);   //read each character and assign to variable
	  
	    
	   if (inchar >= 'A' && inchar <= 'Z') {
	      
	      outchar = (inchar+k-65)%26 + 65;  //if input is a capital letter proceed to encrypt
	      
	          printf("%c", outchar); //c changes the number to a character
     } 

	       
	  else if (inchar >= 'a' && inchar <= 'z') 
	  {
	      inchar = inchar - 32;             //if input is lower case, make it uppercase and then proceed to encyppt 
	      outchar = (inchar+k-65 )%26 + 65;
	  
	          printf("%c", outchar); 
	          
	  }
	     
	    else 
	    {
	   
	   printf("%c", inchar);  
	    }
	    
	}
	
	
	return 0;
}
