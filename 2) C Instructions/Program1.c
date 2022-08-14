/* If a five-digit number is input through the keyboard,
 * Write a program to calculate the sum of its digits.
 */

#include <stdio.h>

int main()
{
    int number, p1, p2, p3, p4, p5, sum;
    printf("\n Enter a five digit number: ");
    scanf("%d", &number);
    p5 = number%10;
    number = number/10;
    p4 = number%10;
    number = number/10;
    p3 = number%10;
    number = number/10;
    p2 = number%10;
    number = number/10;
    p1 = number%10;
    sum = p1+p2+p3+p4+p5;
    printf("\n The sum of the digits of the number: %d", sum);
}