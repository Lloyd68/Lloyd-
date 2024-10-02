#include <stdio.h>

int main () {
    int Book_id, Duedate, Returndate, Overdue, Finerate, Fineamount ;

    printf("Enter the Book_id:");
    scanf("%d",&Book_id);
    printf("Enter Duedate:");
    scanf("%d", &Duedate);
    printf("Enter your Returndate:");
    scanf("%d", &Returndate);
//calculationshjjkkllll

    Overdue=Returndate-Duedate;
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

    printf("\nThe bookID is:%d", Book_id);
    printf("\nThe Duedate is:%d", Duedate);
    printf("\nThe Returndate is:%d", Returndate);
    printf("\nThe Overdue is:%d", Overdue);
    printf("\nThe Finerate is:%d", Finerate);
    printf("\nThe Fineamount is:%d", Fineamount);
    return 0 ;



}