/* Write a program to receive values of latitude (L1,L2) and longitude (G1,G2), in degrees, of two places on the earth
 * and output the distance (D) between them in nautical miles. Formula for distance in nautical miles is:
 * D = 3963 cos^-1(sinL1sinL2+cosL1cosL2*cos(G2-G1))
 */

#include <stdio.h>
#include <math.h>
int main()
{
    float L1,L2,G1,G2,D;
    printf("\n Enter the latitude in degrees: ");
    scanf("%f%f", &L1,&L2);
    printf("\n Enter the longitude in degrees: ");
    scanf("%f%f", &G1,&G2);
    L1 = L1 * M_PI/180;
    L2 = L2 * M_PI/180;
    G1 = G1 * M_PI/180;
    G2 = G2 * M_PI/180;


    D = 3963*acos(((sin(L1)*sin(L2)) + (cos(L1)*cos(L2)))*cos(G2-G1));
    printf("The distance between in nautical miles is: %0.2f", D);

}