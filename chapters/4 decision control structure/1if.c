#include<stdio.h>

int main(){

  int age;
  
 printf("Welcome to ARTO. \nEnter your age: ");
 scanf("%d",&age);

 
 if(age >= 18){
   printf("\nYou are Eligible for license");
  }

  printf("\nYour age is: %d",age);
  
  return 0;
}