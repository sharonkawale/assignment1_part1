/* Hello World program */

#include<stdio.h>

int main()
{
    FILE *input_a;   //this is a pointer to the alphabet input text
	input_a = fopen("alphabet.txt", "r");   //read input(alphabet) and assign to pointer
	
	char letter;
	int num;
	
	//this is a loop to assign alphabet to numbers       
	while(feof(input_a) ==0 ) {        
	    fscanf(input_a, "%c", &letter);
	    //read a character
	    if (letter >= 'A' && letter <= 'Z') {
	  num = letter - 'A';
	  printf("%d\n", num); }

} 

}
