//calculate the  area
//input first charactors of the trangle-T circle-C rectangle - R
//calculate the area using given equations
//exercise 3 labsheet 4
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char type;
	printf("Enter the char type T,R,C: \n");
	type = getchar();
	if (type == 'R')
	{
		float width,length; //craete variables
		
		printf("Enter the width of the rectangle: ");
		scanf("%f", &width); //initialize input values
		
		printf("Enter the lenght of the rectangle: ");
		scanf("%f", &length); //initialize input values
		
		float rectangle = width * length; //calculating
		printf("Area of the ractangle is %.2f", rectangle); //display
	}
	else if (type == 'T')
	{
		float base,height; //craete the  variables
		
		printf("Enter the base of the trangle: ");
		scanf("%f", &base); //initialize input values
		
		printf("Enter the height of the trangle: ");
		scanf("%f", &height); //initialize input values
		
		float trangle = (base* height) / 2; //calculating
		printf("Area of the trangle is %.2f", trangle); //display
	}
	else if (type == 'C')
	{
		float radious; //crate the variable
		
		printf("Enter the radious: ");
		scanf("%f", &radious); //initialize input values
		
		float  circle = (22/7.0) * radious* radious; //calculating
		printf("Area of the circle is %.2f", circle); //display
	}
	else
	{
		printf("wrong attempt");
	}
	
	
	
	return 0;
}
