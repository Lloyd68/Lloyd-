/*
author:spymax
reg no:CT101/G/22151/24
*/

#include <stdio.h>
int main()
{
	int book_id;
	int due_date;
	int return_date;
	int over_due_date;
	int fine_rate;
	int fine_amount;
	
	//prompt the user to enter book id
	printf("enter the book id:");
	scanf("%d",&book_id);
	//prompt the user to enter the due date
	printf("enter the due date:");
	scanf("%d",&due_date);
	//prompt the user to enter the return date
	printf("enter the return date:");
	scanf("%d",&return_date);
	// calculate the over due date
	over_due_date=return_date-due_date;
	if(over_due_date<=7){
		fine_rate=20;
		 fine_amount=fine_rate*over_due_date;
		printf("the fine_amount is:%.2d",fine_amount);
		
	}
	 else if(over_due_date<=15){
		fine_rate=50;
		 fine_amount=fine_rate*over_due_date;
		printf("the fine_amount is:%.2d",fine_amount);
	}
	 else {
		 fine_rate=100;
		 fine_amount=fine_rate*over_due_date;
		printf("the fine_amount is:%.2d",fine_amount); 
	}
	printf("\nthe book_id is:%d",book_id);
	printf("\nthe due_date is:%d",due_date);
	printf("\nreturn_date is:%d",return_date);
	printf("\nthe over_due_date is :%d",over_due_date);
	printf("\nthe fine_rate is:%d",fine_rate);
	printf("\n the fine_amount is:%d",fine_amount);
	

	
	return 0;
}