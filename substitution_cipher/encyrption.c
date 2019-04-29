#include <stdio.h>

int main()   {
    
    
  
    
    FILE *input;
    input = fopen("sub_enc.txt", "r");
    
    
    
    int inchar;
   
    
    
    while(feof(input) ==0 ) {
        
       
	   
	   
	    
	    //read a character
	     fscanf(input, "%d", &inchar);
	  
	  
	    
	    switch(inchar) {
	        case 65 :  printf("Q");
	        
	        break;
	        
	        case 66: printf("W");
	        
	        break;
	        
	        case 'C': printf("E");
	        
	        break;
	        
	        case 'D': printf("R");
	        
	        break;
	        
	        case 'E': printf("T");
	        
	        break;
	        
	        case 'F': printf("Y");
	        
	        break;
	        
	        case 'G': printf("U");
	        
	        break;
	        
	        case 'H': printf("I");
	        
	        break;
	        
	        case 'I': printf("O");
	        
	        break;
	        
	        case 'J': printf("P");
	        
	        break;
	        
	        case 'K': printf("A");
	        
	        break;
	        
	        case 'L': printf("S");
	        
	        break;
	        
	        case 'M': printf("D");
	        
	        break;
	        
	        case 'N': printf("F");
	        
	        break;
	        
	        case 'O': printf("G");
	        
	        break;
	        
	        case 'P': printf("H");
	        
	        break;
	        
	        case 'Q': printf("J");
	        
	        break;
	        
	        case 'R': printf("K");
	        
	        break;
	        
	        case 'S': printf("L");
	        
	        break;
	        
	        case 'T': printf("Z");
	        
	        break;
	        
	        case 'U': printf("X");
	        
	        break;
	        
	        case 'V': printf("C");
	        
	        break;
	        
	        case 'W': printf("V");
	        
	        break;
	        
	        case 'X': printf("B");
	        
	        break;
	        
	        case 'Y': printf("N");
	        
	        break;
	        
	        case 'Z': printf("M");
	        
	        break; 
	        
	        default: printf("%c", inchar);
	        
        } 

	        
	  /*if ((*inchar >= 'A') && (*inchar <= 'Z')) {
        printf("%c", *inchar);
    }
    else printf("%c", *inchar); */
    
}

    
    
    
    return 0;
    
}