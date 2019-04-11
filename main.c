#include <stdio.h> 
//THE PURPOSE OF THIS CODE IS TO ENCRYPT INPUT TEXT AND PRINT THE WORDS IN CAPITAL LETTERS
//THE ENCRYPTION STYLE IS A ROTATION CYPHER

int main() {
   
	FILE *input_b;   //this is a pointer to the message input text
	input_b = fopen("ascii_alpha.txt", "r");   //open and read the message text
	
	char letter, e_l;

	int e_n, k = 2, m; 
	
	

  
	//this is a loop to assign each message letter to ascii characters
	while(feof(input_b) ==0 ) {               
	    
	    //read a character
	    fscanf(input_b, "%c", &letter);
	    //assign message letter to a number
	   if (letter >= 'A' && letter <= 'Z') {
	       m = letter;
	       
	       e_n = ((m+k)%26);
	       e_l = e_n;
	       printf("%c", e_l);
	    } 
	       
	    else if (letter >= 'a' && letter <= 'z') {
	    
	    m = letter;
	    m = m - 32;   //make letter capital
	    e_n = ((m+k)%26);
	    e_l = e_n;
	    printf("%c", e_l); 
	    
	    }  
	    
	    else {
	   printf("%c", letter);
	}
	    
	    
	}
	
	
	return 0;
}
