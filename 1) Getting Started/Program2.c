/* The length and breadth of a rectangle and radius of a circle are input through the keyboard.
 * Write a program to calculate the area and perimeter of the rectangle, and the area and the circumference of the circle.
 */

#include <stdio.h>
#include <math.h>
int main()
{
    int l,b,r,area_rec;
    float area_c,circum_c;
    printf("\n Enter the length and breadth of the rectangle respectively: ");
    scanf("%d%d",&l,&b);
    printf("\n Enter the radius of the circle: ");
    scanf("%d",&r);
    area_rec = l*b;
    area_c = M_PI * pow(r,2);
    circum_c = 2 * M_PI * r;
    printf("\n The Area of rectangle: %d", area_rec);
    printf("\n The Area of circle: %0.2f", area_c);
    printf("\n The Circumference of circle: %0.2f", circum_c);
}