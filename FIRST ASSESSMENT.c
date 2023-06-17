#include<stdio.h>
#include<stdbool.h>

void menu()
{
	printf("\t\n 1.Paneer Tika..........price = 200 rs/piece");
	printf("\t\n 2.Fafda Gathiya........price = 150 rs/piece");
	printf("\t\n 3.Pav Bhaji............price = 120 rs/piece");
	printf("\t\n 4.Undhiyu..............price = 250  rs/piece");
}



main()
{
	printf("\t\t\t-:WELCOME TO OUR RESTAURANT PLEASE CHECK OUR MENU:-");
	menu();
	bool status=true;

	while(status)
	{
		int Paneer_Tika;
		int Fafda_Gathiya ;
		int Pav_Bhaji;
		int Undhiyu;
	int chooses;
	printf("\nEnter your choose :");
	scanf("%d",&chooses);
	
	if(chooses==1)
	{
		printf("\n You Choose Paneer Tika ");
			
	}
	else if(chooses==2)
	{
		printf("\n You Choose Pav Bhaji");
	}
	else if(chooses==3)
	{
		printf("\n You Choose Fafda Gathiya");
	}
	else if (chooses==4)
	{
		printf("\n You Choose Undhiyu");
	}
	
	int quantity;
		printf("\nEnter the quantity :");
		scanf("%d",&quantity);
	
	
	switch(chooses)
	{
		case 1:
			printf("Your bill : %d rs",Paneer_Tika=200*quantity);
			break;
		case 2:
			printf("Your bill : %d rs ",Pav_Bhaji=150*quantity);
			break;
		case 3:
			printf("Your bill  : %d rs ",Fafda_Gathiya=120*quantity);
			break;
		case 4:
			printf("Your bill : %d rs ",Undhiyu=250*quantity);
			break;
		default:
			printf("We don't have");
			break;
			}	
		
		printf("\n\t\t\t -:...DID YOU WANT ANY MORE ?...:-");

	int i;
	printf(" \nYES ! press 1");
	printf("\nNO ! press 2\n");
	scanf("%d",&i);
	
	
	if(i==1)
	menu();
	else if(i==2)
	{
		printf("THANK YOU FOR COMING");
		status=false;
	}
	else
	{
		printf("Invalid Answer");
	}
	
	int total=0;
	total=Paneer_Tika+Pav_Bhaji+Fafda_Gathiya+Undhiyu;
	printf("\n THE TOTAL OF YOUR BILL IS %d :",total);
	
	
	
}

}
