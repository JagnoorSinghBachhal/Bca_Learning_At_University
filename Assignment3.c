#include<stdio.h>
//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

int main()
{
  int num, temp, rev;
  printf("Enter decimal no: ");
  scanf("%d", &num);
  while(num!=0){
    temp = num%2;
    rev= rev*10+temp;
    num = num/2;
  }
  printf("Binary: %d", rev);
  return 0;
}
