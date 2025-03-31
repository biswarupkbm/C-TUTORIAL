#include<stdio.h>

int main(){

  int age;
  char is_indian;
  
 printf("Welcome to ARTO. \nEnter your age: ");
 scanf("%d",&age);
 printf("Are you an Indain citizen(Y/N): ");
 scanf(" %c",&is_indian);
  
 if(is_indian == 'Y' || is_indian == 'y'){
   if(age < 18){
     printf("You are too young, Please apply after you are 18.");
    }
    else if(age > 70){
      printf("You are senior, You can not apply anymore.");
    }
    else{
      printf("You are eligible for a license.");
    }
  } else {
   printf("Only Indian Citizens can apply.");
 }

  printf("\nYour age is: %d",age);
  
  return 0;
}