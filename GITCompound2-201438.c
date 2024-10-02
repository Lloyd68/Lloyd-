#include <stdio.h>
#include <math.h>
/*author ;Anyasi Liloyo Munala 
  Reg.     ;CT101/G/22812/24
  Date 30/09/24
//compound interest program */
int main (){

float P, R, n, t;//variable declaration 
//int n , t;
printf ("enter the principal:  ");
scanf ("%f", &P);//asks user to enter principle
printf ("enter rate of compound interest: ");
scanf ("%f", &R);//asks user to enter rate 
printf ("enter n") ;
scanf ("%f", & n);//asks user to enter NO of times interest is compounded
printf ("enter time duration: ");
scanf ("%f", &t);//asks user to enter time duration
float ci=P*pow((1+(R/100)/n),n*t)-P;//formula for compound interest 
printf ("%f", ci);
return 0;}
    