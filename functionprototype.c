#include<stdio.h>
#include<stdbool.h>

void hello(char name[],int age); //function prototype

bool ageCheck(int age);

int main(){
  // function prototype = provide the compiler // w/ information about a fuction's: name, retu// rn type, and parameters before its actual de//finition.
  // enables type checking and allows functions// to be used before they're defined.
  // Improves readability, organization, and he//lps prevent errors.
 hello("Dilamo",30);
 
 if(ageCheck(14)){
     printf("You are old enough to work at the krusty krab\n");  
     }
 else{
     printf("YOu must be 16+ to work at the krusty krab\n");
 }

 return 0;
}
 
 void hello(char name[],int age){
        printf("Hello %s\n", name);
        printf("You are %d years old\n", age);

 }
 
 bool ageCheck(int age){
 
	 return age >= 16;
 }
