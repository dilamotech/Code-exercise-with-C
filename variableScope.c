#include<stdio.h>
 
 int add(int x, int y)
{
     int result = x + y;

     return result;
 }

 int subtract(int x, int y)
{
     int result = x - y;

     return result;
 }

 int main(){
 
	 // variableScope = refers to where a variable is recognized and accessible.
	 // variables can share the same name if they are in different scopes{}
         int result = subtract(2,4);

	 printf("%d\n",result);

	 return 0;
 }
