#include <stdio.h> 

#include <math.h>
//THE PURPOSE OF THIS CODE IS TO ENCRYPT INPUT TEXT AND PRINT THE WORDS IN CAPITAL LETTERS
//THE ENCRYPTION STYLE IS A ROTATION CYPHER

int main() {
   
	FILE *input_b;   //this is a pointer to the message input text
	input_b = fopen("ascii_alpha.txt", "r");   //open and read the message text
	
	
	char letter;
	int k = -2, m, en;
	
	
	
	
  
  
	//this is a loop to assign each message letter to ascii characters
	while(feof(input_b) ==0 ) {               
	    
	    //read a character
	    fscanf(input_b, "%c", &letter);
	    //assign message letter to a number
	    
	    m = letter;
	    
	   /* if (k<0){
	        addons =  65 + 26;
	        
	    }
	    else {
	        addons = 65;
	    } */
	    
	   if (letter >= 'A' && letter <= 'Z') {
	      
	      en = (m+k-65)%26 + 65;
	       if (en<65){
	           en = en + 26;
	       }
	       
	          printf("%c", en); //c changes the number to a character
     } 

	       
	  else if (letter >= 'a' && letter <= 'z') {
	      m = m - 32;   //make letter capital
	      en = (m+k-65)%26 + 65;
	      if (en < 65){
	          en = en + 26;
	      }
	      
	     
	          printf("%c", en); }
	     
	    
	    else {
	   
	   printf("%c", letter);  }
	    
	}
	
	
	return 0;
}
