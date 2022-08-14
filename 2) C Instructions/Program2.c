/* Write a program to receive Cartesian Co-ordinates (x,y) of a point and convert them into polar co-ordinates (r,theta).
 * Hint: r = sqrt(x^2 + y^2) and theta = tan^-1(y/x)
 */

#include <stdio.h>
#include <math.h>
int main()
{
    float x,y,r,theta,div,sum;
    printf("\n Enter the Cartesian Co-ordinates x and y: ");
    scanf("%f%f", &x,&y);
    sum = (pow(x,2) + pow(y,2));
    r = sqrt(sum);
    div = y/x;
    theta = atan(div);

    theta = theta* 180/ M_PI;

    printf("\n The Polar Co-ordinates are (%0.2f,%0.2f)",r,theta);
}