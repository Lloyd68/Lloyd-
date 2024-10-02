#include <stdio.h>
#include <math.h>

//compound interest
int main (){

float P, R, n, t;
//int n , t;
printf ("enter the principal:  ");
scanf ("%f", &P);
printf ("enter rate of compound interest: ");
scanf ("%f", &R);
printf ("enter n") ;
scanf ("%f", & n);
printf ("enter time duration: ");
scanf ("%f", &t);
float ci=P*pow((1+(R/100)/n),n*t)-P;
printf ("%f", ci);
return 0;}
    