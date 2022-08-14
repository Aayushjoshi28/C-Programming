/* Two numbers are input through the keyboard into two locations C and D.
 * Write a program to interchange the contents of C and D
 */

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number to be interchanged: ");
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After Swapping a=%d, b = %d",a,b);
    return 0;
}