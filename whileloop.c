#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    // while loop = Continue some code WHILE the condition remains true. Condition must be true for us to enter while loop

	/*while(1 == 1){
    printf("HELP! I'M STUCK IN A LOOP!");
	}*/

//	int number = 0;

     /* while(number <= 0){
 printf("Enter a number greater than 0: ");
 scanf("%d", &number);
     } */
 /*int number = 1;
  do{
 printf("Enter a number greater than 0: ");
 scanf("%d", &number);
  }while(number <= 0);*/

/*	char name[50] = "";
	
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';

	while(strlen(name) == 0){
            printf("Name cannot be empty! Please enter your name: ");
	    fgets(name, sizeof(name), stdin);
	    name[strlen(name) - 1] = '\0';

	}

	printf("Hello %s\n",name);
*/
	bool isRunning = false;
	char response = '\0';

	do{
          printf("YOu are playing a game\n");
	  printf("would you like to continue?(Y = yes, N = no): ");
	  scanf(" %c", &response);

	  if(response != 'Y' && response != 'y'){
		  isRunning = false;
	  }
      
	}
	while(isRunning);
	printf("You exit the game\n");

 return 0;

}
