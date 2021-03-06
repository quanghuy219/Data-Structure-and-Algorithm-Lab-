#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double a,b,c;
  double D;
  double x1,x2;

  if (sscanf(argv[1],"%lf",&a) != 1 || sscanf(argv[2],"%lf",&b) != 1 || sscanf(argv[3],"%lf",&c) != 1) {
    printf("Arguments must be number\n");
    return 0;
  }
  else{
  sscanf(argv[1],"%lf",&a);
  sscanf(argv[2],"%lf",&b);
  sscanf(argv[3],"%lf",&c);
  printf("%lf,%lf,%lf\n",a,b,c);
  }
  if(argc != 4){
    printf("Wrong Syntax!!!\nSyntax: a b c, a,b,c are coefficients\n");
    return 0;
  }
 
  if(a == 0){
    printf("a must be non-zero number\n");
    return 0;
  }
  

  D = b*b - 4*a*c;
  
  if( D < 0 ) {
    printf("Equation has no real solution!!!\n");
    return 0;
  }

  else if (D == 0) {
    printf("Solution of equation: x1 = x2 = %f \n",-b/(2*a));
    return 0;
  }

  else if( D > 0) {
    x1 = (-b + sqrt(D))/(2*a);
    x2 = (-b - sqrt(D))/(2*a);
    printf("x1 = %lf\n",x1);
    printf("x2 = %lf\n",x2);
    return 0;
  }
 
}
