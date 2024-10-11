#include <stdio.h>
int main () {
//Author:Anyasi Liloyo Munala
//reg:CT101/G/22812/24
//variables
    float units_consumed, charge_per_unit, total_bill, sur_charge ;
    char customer_id[25 ], customer_name[25] ;

    printf ("Enter customerID:");//user enters ID
    scanf("%s", & customer_id );
    printf("\nEnter customername ");//user enters name
    scanf("%s", customer_name );
    printf("\nEnter units Consumed ");//user enters unit Consumed
    scanf("%f", &units_consumed );


    if (units_consumed <=0) {
        printf("Units cannot be negative ");
    }
    //units less than 200
    if (units_consumed <=199) {
        charge_per_unit =1.20;

        total_bill =units_consumed *charge_per_unit;
    }
    //units greater than 199 but less than 400
    else if ( (units_consumed >=200) && (units_consumed < 400)) {
        charge_per_unit =1.5;
        total_bill =units_consumed * charge_per_unit ;
    }
    //units greater than 399 but less than 600
    else if ((units_consumed >=400)&&(units_consumed <600)) {
        charge_per_unit =1.8;
        total_bill =units_consumed* charge_per_unit ;
    }
    //units above 600
    else {
        charge_per_unit=2.00;
        total_bill =units_consumed *charge_per_unit;
    }
    //returning bill as 100 when bill is less than 100
    if (total_bill <100){total_bill =100;}

    printf("\n\nYour totalbill is ksh:%.2f", total_bill );

    if (total_bill >400) {
        sur_charge= 0.15;
        total_bill = total_bill + sur_charge*total_bill;
    }
    //prints total bill
    printf("\n\nNew total bill is: ksh%.2f", total_bill );

    printf("\n\nConsumerID:%s", customer_id);//prints customer ID
    printf("\nconsumer mame:%s", customer_name );//prints customer name
    printf("\nUnits Consumed:%.2f", units_consumed );//prints units consumed
    printf("\nCharge per Unit:%.2f",charge_per_unit );//prints charge per unit 
    printf("\nTotal Amount to Pay:ksh%.2f",total_bill );//prints total bill
    return 0 ;
}