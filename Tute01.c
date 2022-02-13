/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
   int mark1, mark2,cal ;
   
   printf("enter mark1\n:");
   scanf("%d",&mark1);
   printf("enter mark2:");
   scanf("%d",&mark2);
   
   
   float avg;
   cal = mark1 + mark2;
   avg = cal/2.0;
   
   printf("average of the two marks - %.1f",avg);
  return 0;
}

