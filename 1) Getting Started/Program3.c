/* Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as
 * A(n-1) cut in half parallel to its shorter sides. Thus paper of size A1 would have dimensions 841 mm x 594 mm.
 * Write a program to calculate and print paper sizes A0, A1, A2, ... A8.
 */

#include <stdio.h>
int main()
{
    //A0 - 1189 x 841
    int A0ht = 1189, A1ht, A2ht, A3ht, A4ht, A5ht, A6ht, A7ht, A8ht;
    int A0wd = 841, A1wd, A2wd, A3wd, A4wd, A5wd, A6wd, A7wd, A8wd;
    // long side cut in half

    printf("\nA0 = %d mm x %d mm",A0ht,A0wd);
    A1ht = A0wd;
    A1wd = A0ht/2;
    printf("\nA1 = %d mm x %d mm",A1ht,A1wd);
    A2ht = A1wd;
    A2wd = A1ht/2;
    printf("\nA2 = %d mm x %d mm",A1ht,A2wd);
    A3ht = A2wd;
    A3wd = A2ht/2;
    printf("\nA3 = %d mm x %d mm",A3ht,A3wd);
    A4ht = A3wd;
    A4wd = A4ht/2;
    printf("\nA4 = %d mm x %d mm",A4ht,A4wd);
    A5ht = A4wd;
    A5wd = A4ht/2;
    printf("\nA5 = %d mm x %d mm",A5ht,A5wd);
    A6ht = A5wd;
    A6wd = A6ht/2;
    printf("\nA6 = %d mm x %d mm",A6ht,A6wd);
    A7ht = A6wd;
    A7wd = A6ht/2;
    printf("\nA7 = %d mm x %d mm",A7ht,A7wd);
    A8ht = A7wd;
    A8wd = A8ht/2;
    printf("\nA8 = %d mm x %d mm",A8ht,A8wd);
}