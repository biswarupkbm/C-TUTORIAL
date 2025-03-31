#include<stdio.h>

int main(){

  int age;
  
 printf("Welcome to ARTO. \nEnter your age: ");
 scanf("%d",&age);

 
 if(age >= 18){
   printf("\nYou are Eligible for license");
  } else {
    printf("\nYou are too young, Please apply after you are 18.");
  }

  printf("\nYour age is: %d",age);
  
  return 0;
}