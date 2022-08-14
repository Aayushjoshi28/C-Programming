/* If value of an angle is input through the keyboard, write a program to print all its trigonometric ratios.
 */

#include <stdio.h>
#include <math.h>
int main()
{
    float angle,sine,cosine,tangent,cotangent,cosecant,secant;
    printf("Enter the angle: ");
    scanf("%f",&angle);
    sine = sinf(angle);
    printf("\n sin(%f) = %f",angle,sine);
    cosine = cosf(angle);
    printf("\n cos(%f) = %f",angle,cosine);
    tangent = tanf(angle);
    printf("\n tan(%f) = %f",angle,tangent);
    cotangent = 1/tangent;
    printf("\n cot(%f) = %f",angle,cotangent);
    cosecant = 1/cosine;
    printf("\n cosec(%f) = %f",angle,cosecant);
    secant = 1/sine;
    printf("\n sec(%f) = %f",angle,secant);
    return 0;
}