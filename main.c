#include <stdio.h> 
//THE PURPOSE OF THIS CODE IS TO ENCRYPT INPUT TEXT AND PRINT THE WORDS IN CAPITAL LETTERS
//THE ENCRYPTION STYLE IS A ROTATION CYPHER

int main() {
	FILE *input;
	input = fopen("alphabet.txt", "r");      //read input(alphabet) and assign to pointer
  char letter;
  int num ;
  
  
	while(feof(input) ==0 ) {               
	    
	    //read a character
	    fscanf(input, "%c", &letter);
	    //assign message letter to a number
	   if (letter >= 'A' && letter <= 'Z') {
	  num = letter - 'A';
	  printf("%d\n", num);
  
	} else if (letter >= 'a' && letter <= 'z') {
	    
	    num = letter - 'a';
	    printf("%d\n", num);
	}
	   
	
 
	    //int e = (m+k)(mod26)
	    
	   
	    //print that character to the console
	    
	    
	}
	
	
	return 0;
}
