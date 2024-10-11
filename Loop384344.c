# include <stdio.h>
int main()
{
	int num;//variable 
	printf("enter number:");
	scanf("%d",&num);//user input
	do{
		printf("num=%d\n",num);
		num++;
	}
	while(num<20);
	
	
	return 0;
}