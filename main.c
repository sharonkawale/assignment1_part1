#include <stdio.h> 
//THE PURPOSE OF THIS CODE IS TO ENCRYPT INPUT TEXT AND PRINT THE WORDS IN CAPITAL LETTERS
//THE ENCRYPTION STYLE IS A ROTATION CYPHER

int main() {
	FILE *input;
	input = fopen("input.txt", "r");
	
	while(feof(input) ==0 ) {
	    char c;
	    //read a character
	    fscanf(input, "%c", &c);
	    
	   
	    //print that character to the console
	    printf("%c", c);
	    
	}
	return 0;
}
