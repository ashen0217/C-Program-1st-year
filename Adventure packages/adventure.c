/* Package Type Title Cost per person
	1 Horse ride 2000/=
	2 Scuba Diving 5000/=
	3 Water Rafting 7000/=
*/
#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int type; //craete the variable 
	int people;//craete the variable 
	float cost;
	
	printf("Enter the package type: ");
	scanf("%d", &type);
	
	switch(type)
	{
		case 1 : printf("It is Horse ride \n");
		
				 printf("Enter the number of people:");
				 scanf("%d", &people);
				 cost = people*2000;
				 printf("your cosrt is %.2f", cost);
				 break;
				 
		case 2 : printf("It is scuba diving \n");
		
				 printf("Enter number of people:");
				 scanf("%d" ,&people);
				 cost = people*5000;
				 printf("your cosrt is %.2f", cost);
				 break;
		
		case 3 : printf("It is Water rafting \n");
				 
				 printf("Enter number of people:");
				 scanf("%d", &people);	
				 cost = people*7000;
				 printf("your cosrt is %.2f", cost);
				 break;
		default : printf("Invalid input: ");		 
	}
	return 0;
	
	
}
  
