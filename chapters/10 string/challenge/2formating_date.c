#include<stdio.h>

int main(){
  char day[10];
  char month[15];
  int year;

  printf("formating date\n");
  printf("enter the current day: ");
  scanf("%s", &day);
  printf("enter the current month: ");
  scanf("%s", &month);
  printf("enter the current year: ");
  scanf("%d", &year);

  printf("the current date is: %s: %s: %04d", day, month, year);

  return 0;
}