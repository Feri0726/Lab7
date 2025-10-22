/* Task description:
Write a function that receives the length of an edge of a cube as a parameter. The function should return the volume and the surface area of the cube in two further parameters passed by address. 
(The return type of the function is void.) Call this function from the main to calculate the volume and the surface area of a cube of 2.7 edge length, then print the results in main!

*/
#include <stdio.h>
void cube(double edge, double *parea, double *pvolume)
{
    *parea = (edge*edge*6);
    *pvolume = (edge*edge*edge);
}


int main(){
    double edge;
    double par;
    double pvo;
    printf("Edge?");
    scanf("%lf", &edge);
    cube(edge, &par, &pvo);
    printf("A %f long edge cubes parea is %f, volume is %f", edge, par, pvo);


return 0;
}
