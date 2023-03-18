//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

#include <stdio.h>
int main() {
    int num, rem, bin = 0, base = 1;
    printf("Enter decimal number: ");
    scanf("%d", &num);
    while (num > 0){
        rem = num%2;
        bin = bin+rem*base;
        num = num/2;
        base = base*10;
    }
    printf("Binary equivalent: %d\n", bin);
    return 0;
}
