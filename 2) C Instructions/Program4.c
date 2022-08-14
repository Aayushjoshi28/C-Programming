/* Wind Chill Factor is the felt air temperature on exposed skin due to wind.
 * The wind chill temperature is always lower than the air temperature, and is calculated as per the following formula:
 * wcf = 35.74 + 0.6215t + (0.4275t - 35.75)*v^0.16
 * where t = temperature and v = wind velocity.
 * Write a program to receive values of t and v and calculate wind chill factor (wcf).
 */

#include <stdio.h>
#include <math.h>
int main()
{
    float t,v,wcf;
    printf(" Enter the value of time t and wind velocity v respectively: ");
    scanf("%f%f",&t,&v);
    wcf = (35.74 + (0.6215*t) + (((0.4275*t)- 35.75)* pow(v,0.16)));
    printf("The Wind Chill Factor is: %0.2f",wcf);
}