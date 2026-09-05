#include <stdio.h>
#include<stdbool.h>
#include <string.h>
#include <math.h>

int main () {
    int age = 0;
    float gpa = 0.0f;
    int x=1;
    float y=2.5;
    double pi= 3.14159265358979 ;
    char grade = '\0' ;
    char arrayOfChar[] = "array of character";
    char name[50]= "";
    bool isLord = true;
    int d = 5;
    int r = 5;
    int s = 0;
    int z = 9;
    float q = 45;
    //z = sqrt(z);
    //z = pow(z, 2);
    
      //q = round(q);
      //q = ceil(q);
      //q = sin(q);
      //q = cos(q);
      q = tan(q);
    //printf("%d", z);
    printf("%f", q);
    d++;
    d--;
    
    
    s = d*r;

    s = d+r;
    s = d-r;
    s = d/r;
    d*=8;
    d/=8;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gpa: ");
    scanf(" %f", &gpa);
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    getchar(); // consume the newline character left by previous scanf
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // Remove the newline character from the end of the string
    printf("your age is %d\n",age);
    printf("your gpa is %.2f\n",gpa);
    printf("your grade is %c\n",grade);
    printf("your name is %s\n",name);
    printf("%d\n",d);
    printf("%d\n",s);
    printf("this is float %.1f\n",y);
    printf("this is decimal %d\n",x);
    printf("this is double %.14lf\n",pi);
    printf("this is char %c\n",grade);
    printf("this is an array of character %s\n",arrayOfChar);
    printf("It's really good\n");
    printf("Jesus is lord%d",isLord);
    return 0;
}
