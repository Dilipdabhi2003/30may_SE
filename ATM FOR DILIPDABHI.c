#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void service()
{
	printf("press 1. to Diposit...\n");
	printf("press 2. to withdraw...\n");
	printf("press 3. to cheak a balance...\n");
	printf("press 4. to Exit...\n");
}


main()
{
	printf(".....................WELCOME TO THE ATM PROVIDE BY STATE BANK OF INDIA.....................\n\n");
	
	printf("PLEASE SET PIN NUMBER");
	int pin;
	printf("Enter a generate pin number :");
	scanf("%d",&pin);
	
	service();
	
	int number;
	printf("\nEnter FOUR digit pin number :");
	scanf("%d",&number);
	
	if(pin==number)
{
	
	int balance;
	srand(time(0));
	balance=rand();
	
	int choose;
	printf("Enter your choose :");
	scanf("%d",&choose);
	int diposit=0;
	int withdraw1=0;
	int withdraw=0;
	switch(choose)
	{
		case 1:
		
		    printf("This is your balance :%d\n",balance);
			printf("Enter your amount for diposit:\n");
			scanf("%d",&diposit);
			printf("your balance after diposit %d:\n",balance+diposit);
			break;
			
		case 2:
			
			printf("This is your balance :%d\n",balance);
			printf("Enter your amount for withdraw:\n");
			scanf("%d",&withdraw1);
			withdraw=balance-withdraw1;
			if(withdraw>0)
			{
				printf("your balance after withdraw %d:\n",withdraw);
			}
			else
			{
				printf("insufficient balance!!!\n");
			}
			break;
			
		case 3 :
			
			printf("This is your balance :%d",balance);
			break;
			
		case 4:
			
			printf("thank you for visit....");
	}
}
	else
	{
		printf("your pin number is wrong you can't use service ");
	}
	
}
