/* Task description:
Write a function that receives two numbers, and return !!both!! their sum and their product!
one function has to do that!
*/
#include <stdio.h>
double sumerator(double a, double b, double *sum, double *prod){
    *sum = a + b;
    *prod = a * b;
}


int main(void) {
    double a, b, sum, prod;
    printf("A and B?");
    scanf("%lf", &a );
    scanf("%lf", &b );
    sumerator(a, b, &sum, &prod);
    printf("Values: %f, %f; Their sum and prod: %f, %f", a, b, sum, prod);

   

    return 0;
}
