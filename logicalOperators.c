#include <stdio.h>

int main(){
    // logical operators = Used to combine or modify boolean expressions.
    
    // && = AND
    // || = OR
    // ! = NOT
     
	/*int temp = -1;
	if(temp <= 0 || temp >= 30){
      printf("The temperature is BAD\n");
	}
	else {
         printf("The temperature is GOOD\n");
	} */
/*
	bool isSunny = true;
	
	if(!isSunny){
		printf("It is CLOUDY outside\n");
	}
	else{
          printf("It is SUNNY outside\n");
	}
*/
	int temp = -1;
	if(temp >= 0 && temp <= 30){
      printf("The temperature is GOOD\n");
        }
	 else {
         printf("The temperature is BAD\n");
        }



    return 0;
}
