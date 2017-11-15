/* $begin main2 */
/* main2.c */
#include <stdio.h>
#include "vector.h"
vec x;
vec y;
vec z;


int main() 
{
    printf("ingrese los valores del primer vector: \n");
    printf("x: ");
    scanf("%d", &x.xy[0]);
    printf(" \n");
    printf("y: ");
    scanf("%d", &x.xy[1]);
    printf(" \n");

    printf("ingrese los valores del segundo vector: \n");
    printf("x: ");
    scanf("%d", &y.xy[0]);
    printf(" \n");
    printf("y: ");
    scanf("%d", &y.xy[1]);
    addvec(x.xy, y.xy, z.xy, 2);
    printf(" \n");
    printf("z = [%d %d]\n", z.xy[0], z.xy[1]);
    return 0;
}
/* $end main2 */
