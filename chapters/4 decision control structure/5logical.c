#include<stdio.h>

int main(){

  int age;
  char is_indian;
  
 printf("Welcome to ARTO. \nEnter your age: ");
 scanf("%d",&age);
 printf("Are you an Indain citizen(Y/N): ");
 scanf(" %c",&is_indian);
  
 if (is_indian == 'Y' && age >= 18 && age < 70){
  printf("You are eligible for a license.");
 } else {
  printf("You are not eligible.");
 }


  printf("\nYour age is: %d",age);
  
  return 0;
}