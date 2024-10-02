#include <stdio.h>
/*Author;Anyasi Liloyo Munala 
    Reg ;CT101/G/22812/24
    Date;30/09/24
    A simple program to calculate
    simple interest */
int main () {

float principal, rate, time;//float variables

printf ("\nEnter the principal : ");
scanf ("%f", &principal);//prompts user to enter principal 
printf ("\nenter the rate: ");
scanf ("%f",& rate);//prompts user to enter rate
printf ("\nenter the time duration: ");
scanf("%f",&time);//prompts user to enter time 
float si=(principal*rate*time)/100;
printf ("the simple interest thus is: %.2f",si);
 
return 0 ;
}