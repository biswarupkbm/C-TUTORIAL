#include<stdio.h>

int main(){
  int day;

  printf("enter day number between(1-7): ");
  scanf("%d",&day);

  switch (day)
  {
  case 1: printf("Today is Monday");
    
    break;
  case 2: printf("Today is Tuesday");
    
    break;
  case 3: printf("Today is Wednesday");
    
    break;
  case 4: printf("Today is Thursday");
    
    break;
  case 5: printf("Today is Friday");
    
    break;
  case 6: printf("Today is Saterday");
    
    break;
  case 7: printf("Today is Sunday");
    
    break;
  
  default: printf("Please enter valid number");
    break;
  }


  return 0;
}