#include <stdio.h>
#include <math.h>
/*Author ;Anyasi Liloyo Munala
 Reg.   ;CT101/G/22812/24
 DATE;1/10/24*/
int main () {

    int Age salary;//variables

    printf("hello, \nThis program checks if you are eligible for loan!\n Please enter your age:");
    scanf ("%d", &Age);//prompts user to enter age
    printf ("OK, now enter your annual income:");
    scanf ("%d", &salary);//prompts user to enter annual salary

    if (Age >=21 & salary >=21000) {
        printf ("congratulations you qualify for a loan!");
    }
    else {
        printf("Unfortunately we are unable to offer a loan at this time");
    }

    return 0;
}