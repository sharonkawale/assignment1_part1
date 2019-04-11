#include <stdio.h> 
//THE PURPOSE OF THIS CODE IS TO ENCRYPT INPUT TEXT AND PRINT THE WORDS IN CAPITAL LETTERS
//THE ENCRYPTION STYLE IS A ROTATION CYPHER

int main() {
    /*FILE *input_a;   //this is a pointer to the alphabet input text
	input_a = fopen("alphabet.txt", "r");   */   //read input(alphabet) and assign to pointer
	
	FILE *input_b;   //this is a pointer to the message input text
	input_b = fopen("ascii_alpha.txt", "r");   //open and read the message text
	
	
	char letter;
	int num ;
  
  //this is a loop to assign alphabet to numbers       
	/*while(feof(input_a) ==0 ) {        
	    
	    //read a character
	    fscanf(input_a, "%c", &letter);
	    //assign message letter to a number
	   if (letter >= 'A' && letter <= 'Z') {
	  num = letter - 'A';
	  printf("%d\n", num);
  
	} else if (letter >= 'a' && letter <= 'z') {
	    
	    num = letter - 'a';
	    printf("%d\n", num);
	} */
	
	//this is a loop to assign each message letter to ascii characters
	while(feof(input_b) ==0 ) {               
	    
	    //read a character
	    fscanf(input_b, "%c", &letter);
	    //assign message letter to a number
	   if (letter >= 'A' && letter <= 'Z') {
	  num = letter;
	  printf("%d, ", num);
  
	} else if (letter >= 'a' && letter <= 'z') {
	    
	    num = letter;
	    printf("%d, ", num);
	}  else {
	    /*num = letter;
	    num = num - num + 32;*/
	    printf("%c", letter);
	}
	
	   
	
 
	    //int e = (m+k)(mod26)
	    
	   
	    //print that character to the console
	    
	    
	}
	
	
	return 0;
}
