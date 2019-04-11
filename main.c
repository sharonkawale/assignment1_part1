#include <stdio.h> 
//THE PURPOSE OF THIS CODE IS TO ENCRYPT INPUT TEXT AND PRINT THE WORDS IN CAPITAL LETTERS
//THE ENCRYPTION STYLE IS A ROTATION CYPHER

int main() {
   
	FILE *input_b;   //this is a pointer to the message input text
	input_b = fopen("ascii_alpha.txt", "r");   //open and read the message text
	
	FILE *input_a;   //this is a pointer to the alphabet input text
	input_a = fopen("alphabet.txt", "r");   //read input(alphabet) and assign to pointer
	
	char letter, e_l;
	int k=2, m, e_n;
	
	
  
  
	//this is a loop to assign each message letter to ascii characters
	while(feof(input_b) ==0 ) {               
	    
	    //read a character
	    fscanf(input_b, "%c", &letter);
	    //assign message letter to a number
	    
	    m = letter;
	    
	   if (letter >= 'A' && letter <= 'Z') {
	       
	       e_n = ((m+k));
	       e_l = e_n;
	       printf("%c", e_n);
	    } 
	       
	    else if (letter >= 'a' && letter <= 'z') {
	    
	    
	    m = m - 32;   //make letter capital
	    e_n = ((m+k));
	    e_l = e_n;
	    printf("%c", e_n); 
	    
	    }  
	    
	    else {
	   printf("%c", letter);  }
	    
	}
	
	
	return 0;
}
