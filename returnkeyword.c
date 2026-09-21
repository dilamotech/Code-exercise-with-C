#include<stdio.h>
#include<stdbool.h>
 int getMax(int x, int y){
    
	 if (x >= y){
         return x;
	 }
	 else{
	 return y; 
	 }
 }

 bool agecheck(int age){
    
    if(age >= 18){
   
	    return true;
    }

    else{
   return false;
    }

}

 double cube(double num){
 return num*num*num; 
} 
 double square(double num){

  return num  * num;

 }
int main(){

	int max = getMax(4,3);
      printf(" %d\n",max);
	int age = 12;
	/*if(agecheck(age)){
          printf("You may sign up\n");
	}
	else{
        printf("You may be 18+ to sign up\n");
	}*/

      //return = returns a value back to where you call a function

	double x = cube(2);
	double y = cube(3);
	double z = cube(4);
    /*
	printf("%lf\n",x);
	printf("%lf\n",y);
	printf("%lf\n",z);
    */
	return 0;
}
