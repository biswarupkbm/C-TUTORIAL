#include<stdio.h>

int main(){

  int age;
  
 printf("Welcome to ARTO. \nEnter your age: ");
 scanf("%d",&age);
   
 if(age < 18){
  printf("You are too young, Please apply after you are 18.");
  } else if(age > 70){
    printf("You are senior, You can not apply anymore.");
  } else{
    printf("You are eligible for a license.");
  }

  printf("\nYour age is: %d",age);
  
  return 0;
}