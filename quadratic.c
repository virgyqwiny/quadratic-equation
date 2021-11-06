*
Project : Quadratic Equation Solution
Author : Virginia Mbugua
Date : 26th oct 2021
Compiler : GCC
Language : C99
License : MIT


INPUTS ->a,b,c
OUTPUTS ->X1,X2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

//Variable declaration
int a,b,c;
float x1,x2;

//Capture input
printf("\tQuadratic Equation Solver!\n);
printf("Enter the values a,b and c:");
scanf("%d%d%d,&a,&b,&c");

//processing/computation
if{(b*b-4*a*c)==0){

                        x1 = x2 = (-b + sqrt(b*b-4*a*c))/(2*a);
}
if((b*b-4*a*c)>0){
    x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    x2 =(-b -sqrt(b*b-4*a*c))/(2*a);
}
if((b*b-4*a*c)>0)(
                  printf("The equation has no roots\n");
                  exit(1);
}
//output
printf("The values of x are %f and %f\n",x1,x2);

return 0;
}


































