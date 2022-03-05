/* Temperature of a city in Fahrenheit degrees in input through the keyboard.
 * Write a program to convert this temperature into Centigrade degrees.
 * */

#include <stdio.h>
int main()
{
    float F,C;
    printf("\n Enter the Temperature in Fahrenheit: ");
    scanf("%f",&F);
    C = ((5*(F-32))/9);
    printf("\n The Temperature in Celsius: %0.2f", C); //0.2 to get value till 2 decimal points only.
}