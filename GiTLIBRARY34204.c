#include <stdio.h>
/*Author ;Anyasi Liloyo Munala 
Reg  ;CT101/G/22812/24
Date ;1/10/24*/
int main () {
    int Book_id, Duedate, Returndate, Overdue, Finerate, Fineamount ;

    printf("Enter the Book_id:");
    scanf("%d",&Book_id);//prompts user to enter bookID
    printf("Enter Duedate:");
    scanf("%d", &Duedate);//prompts user to enter Duedate 
    printf("Enter your Returndate:");
    scanf("%d", &Returndate);//prompts user to enter Returndate 
//calculations

    Overdue=Returndate-Duedate;
    printf ("Overdue is %d days");//prints overdue days
    if (Overdue<=7) {
        Finerate=20;
        Fineamount=Finerate*Overdue;
        printf("The fine amount is:%d", Fineamount);
    }
    else if(Overdue<=7) {
        Finerate=50;
        Fineamount=Finerate*Overdue;
        printf("The fine amount is:%d", Fineamount);
    }
    else {
        Finerate=100;
        Fineamount=Finerate*Overdue;
        printf("The fine amount is:%d", Fineamount);
    }

    printf("\nThe bookID is:%d", Book_id);//outputsbookOD
    printf("\nThe Duedate is:%d", Duedate);//outputs Duedate 
    printf("\nThe Returndate is:%d", Returndate);//outputs Returndate 
    printf("\nThe Overdue is:%d", Overdue);//outputs Overdue days
    printf("\nThe Finerate is:%d", Finerate);//outputs Finerate 
    printf("\nThe Fineamount is:%d", Fineamount);//outputs Fineamount 
    return 0 ;



}