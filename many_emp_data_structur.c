#include <stdio.h>

struct employee 
{
    int no;
    char name[50];
    char address[100];
    int age;
};

void printEmployee(struct employee p) 
{
	printf("employee no=%d\nemployee name=%s\nemployee address=%s\nemployee age=%d",p.no,p.name,p.address,p.age);
}

int main() 
{
	struct employee p1 = { 101, "Dilip Dabhi", "Bhavnagar", 19 };
    struct employee p2 = { 102, "Aniket", "Bhavnagar", 35};
    struct employee p3 = { 103, "Arpan", "Bhavnagar", 22 };
    struct employee p4 = { 104, "Shivarsh","Jamnagar",40 };
    struct employee p5 = { 105, "Harsh", "Ahmedabad", 35 };
	

    printf("\t\t\tDetails of employee 1:\n");
    printEmployee(p1);

    printf("\n\n\t\t\tDetails of employee 2:\n");
    printEmployee(p2);
	
	printf("\n\n\t\t\tDetails of employee 3:\n");
    printEmployee(p3);
    
    printf("\n\n\t\t\tDetails of employee 4:\n");
    printEmployee(p4);
    
    printf("\n\n\t\t\tDetails of employee 5:\n");
    printEmployee(p5);
}

