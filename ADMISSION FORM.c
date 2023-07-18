#include<stdio.h>
#include<string.h>
void inquiry()
{
	char fname[30];
	char lname[30];
	char college[40];
	int mobile ;
	printf("Enter your Frist Name :\n");
	gets(fname);
	printf("Enter your Last Name :\n");
	gets(lname);
	printf("Enter your College/ University Name :\n");
	gets(college);
	printf("Enter Your Mobile :");
	scanf("%d",&mobile);

}

main()
{
	printf("..............................                               ..............................\n");
	printf("                              WELCOME TO THE DOWNS TECHNOLOGY                              \n");
	printf("..............................                               ..............................\n");

	printf("\t\t\t\t***** OM NAMH SHIVAY *****\n");
	
	printf("\nPleace  fill inquiry from :\n");
	inquiry();
	
	printf("What do you want to study...??? \n");
	printf("\nPlease check the brochure\n\n");
	
	
	
	int x;
	printf("Do you want placement\n");
	printf("Yes=1 or No=2 \n");
	scanf("%d",&x);
	
	printf("press.1 basic language SE...\n");
	printf("press.2 BACKEND WEB DEVELOPMENT language...\n");
	printf("press.3 frontend web development language...\n");
	printf("press.4 fullstake web developer...\n");
	printf("press.5 software testing...\n");
	
	if(x==1)
{
		
	int choose;
	printf("Enter your Choice:\n");
	scanf("%d",&choose);

	if(choose==1)
	{
		printf("You Chooses Basic Language SE:::\n");
		printf("DUration= 2 months..\n");
		printf("Fees = 15000rs. Only...\n");
		printf("No Placement Available!!!!!\n");
		
		
	}
	else if(choose==2)
	{
		printf("You  Chooses BACKEND LANGUAGE:::\n");
		printf("Duration= 4 months..\n");
		printf("Fees = 75000rs. Only...\n");
		printf(" Placement Available!!!!!\n");
		
		printf("\tpress.1 PYTHON WEB DEVELOPMENT...\n");
		printf("\tpress.2 JAVA WEB DEVELOPMENT ...\n");
		printf("\tpress.3 PHP WEB DEVELOPMENT...\n");
		printf("\tpress.4 Node JS WEB DEVELOPMENT...\n");
		int choose1;
		printf("Enter your choice :\n");
		scanf("%d",&choose1);
		
		switch(choose1)
		{
			case 1:
				printf("Very Good Choice \n");
				printf("You Choose Python...\n");
				printf("Your facluty Name : MANAV GATHANI \n");
				break;
				
		
			case 2:
				printf("Very Good Choice \n");
				printf("You Choose Java....\n");
				printf("Your facluty Name : RAHUL \n");
				break;	
				
			case 3:
				printf("Very Good Choice \n");
				printf("You Choose Php....\n");
				printf("Your facluty Name : DARSHAN \n");
				break;	
				
			case 4:
				printf("Very Good Choice \n");
				printf("You Choose node js....\n");
				printf("Your facluty Name : ANJALI MAM \n");
				break;	
		}
	}
	else if(choose==3)
	{
		printf("You Chooses frontend language:::\n");
		printf("DUration= 3 months..\n");
		printf("Fees = 60000rs. Only...\n");
		printf("Placement Available!!!!!\n");

		printf("\tpress.1 HTML AND JS AND CSS WEB DEVELOPMENT...\n");
		printf("\tpress.2 REACT JS WEB DEVELOPMENT ...\n");

		int choose2;
		printf("Enter Your Choice::\n");
		scanf("%d",&choose2);
				switch(choose2)
		{
			case 1:
				printf("Very Good Choice \n");
				printf("You Choose HTML AND CSS AND JS...\n");
				printf("Your facluty Name : NIRAV BHAI \n");
				break;
		
			case 2:
				printf("Very Good Choice \n");
				printf("You Choose REACT JS....\n");
				printf("Your facluty Name : CHETAN BHAI\n");
				break;	
				
		}
	}
	else if(choose==4)
	{
		
		printf("You Chooses full stack developer:::\n");
		printf("DUration= 7 months..\n");
		printf("Fees = 120000rs. Only...\n");
		printf(" Placement Available!!!!!\n");
		
		printf("press 1. Python And HTML AND JS AND CSS");
		printf("press 2. Java and REACT JS");
		int choose3;
		printf("ENter Your Choice:\n");
		scanf("%d",&choose3);
		switch(choose3)
		{
			case 1:
				printf("Very Good Choice \n");
				printf("You Choose Python And HTML AND JS AND CSS...\n");
				printf("Your facluty Name : MANAV GATHANI & NIRAV BHAI \n");
				break;
				
			case 2:
				printf("Very Good Choice \n");
				printf("You Choose Java and REACT JS....\n");
				printf("Your facluty Name : RAHUL BHAI AND CHETAN BHAI \n");	
				break;	
		}	
	}
	else if(choose==5)
	{
		printf("You Chooses software taster:::\n");
		printf("DUration= 2.5 months..\n");
		printf("Fees = 40000rs. Only...\n");
		printf("No Placement Available!!!!!\n");
		
				printf("Very Good Choice \n");
				printf("You Choose Java....\n");
				printf("Your facluty Name : RAHUL \n");
					
			
	}
	else
	{
	printf("invalid input!!!!!!!!!!!!\n");	
	}
}
	else if(x==2)
	{
			
	int choose;
	printf("Enter your Choice:\n");
	scanf("%d",&choose);

	if(choose==1)
	{
		printf("You Chooses Basic Language SE:::\n");
		printf("Duration= 2 months..\n");
		printf("Fees = 15000rs. Only...\n");
		printf("No Placement Available!!!!!\n");
		
		
	}
	else if(choose==2)
	{
		printf("You  Chooses BACKEND LANGUAGE:::\n");
		printf("DUration= 4 months..\n");
		printf("Fees = 55000rs. Only...\n");
		printf(" No Placement Available!!!!!\n");
		
		printf("\tpress.1 PYTHON WEB DEVELOPMENT...\n");
		printf("\tpress.2 JAVA WEB DEVELOPMENT ...\n");
		printf("\tpress.3 PHP WEB DEVELOPMENT...\n");
		printf("\tpress.4 Node JS WEB DEVELOPMENT...\n");
		int choose1;
		printf("Enter your choice :\n");
		scanf("%d",&choose1);
		
		switch(choose1)
		{
			case 1:
				printf("Very Good Choice \n");
				printf("You Choose Python...\n");
				printf("Your facluty Name : MANAV GATHANI \n");
				break;
				
		
			case 2:
				printf("Very Good Choice \n");
				printf("You Choose Java....\n");
				printf("Your facluty Name : RAHUL \n");
				break;	
				
			case 3:
				printf("Very Good Choice \n");
				printf("You Choose Php....\n");
				printf("Your facluty Name : DARSHAN \n");
				break;	
				
			case 4:
				printf("Very Good Choice \n");
				printf("You Choose node js....\n");
				printf("Your facluty Name : ANJALI MAM \n");
				break;	
		}
	}
	else if(choose==3)
	{
		printf("You Chooses frontend language:::\n");
		printf("DUration= 3 months..\n");
		printf("Fees = 35000rs. Only...\n");
		printf("No Placement Available!!!!!\n");

		printf("\tpress.1 HTML AND JS AND CSS WEB DEVELOPMENT...\n");
		printf("\tpress.2 REACT JS WEB DEVELOPMENT ...\n");

		int choose2;
		printf("Enter Your Choice::\n");
		scanf("%d",&choose2);
				switch(choose2)
		{
			case 1:
				printf("Very Good Choice \n");
				printf("You Choose HTML AND CSS AND JS...\n");
				printf("Your facluty Name : NIRAV BHAI \n");
				break;
		
			case 2:
				printf("Very Good Choice \n");
				printf("You Choose REACT JS....\n");
				printf("Your facluty Name : CHETAN BHAI\n");
				break;	
				
		}
	}
	else if(choose==4)
	{
		
		printf("You Chooses full stack developer:::\n");
		printf("Duration= 7 months..\n");
		printf("Fees = 100000rs. Only...\n");
		printf("No Placement Available!!!!!\n");
		
		printf("press 1. Python And HTML AND JS AND CSS");
		printf("press 2. Java and REACT JS");
		int choose3;
		printf("ENter Your Choice:\n");
		scanf("%d",&choose3);
		switch(choose3)
		{
			case 1:
				printf("Very Good Choice \n");
				printf("You Choose Python And HTML AND JS AND CSS...\n");
				printf("Your facluty Name : MANAV GATHANI & NIRAV BHAI \n");
				break;
				
			case 2:
				printf("Very Good Choice \n");
				printf("You Choose Java and REACT JS....\n");
				printf("Your facluty Name : RAHUL BHAI AND CHETAN BHAI \n");	
				break;	
		}	
	}
	else if(choose==5)
	{
		printf("You Chooses software taster:::\n");
		printf("DUration= 2.5 months..\n");
		printf("Fees = 25000rs. Only...\n");
		printf("No Placement Available!!!!!\n");
		
				printf("Very Good Choice \n");
				printf("You Choose Java....\n");
				printf("Your facluty Name : RAHUL \n");
					
			
	}
	else
	{
	printf("invalid input!!!!!!!!!!!!\n");	
	}
}

}
