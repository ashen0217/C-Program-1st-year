/*Assume that you are supposed to write a C program to update the bank balance of a customer
  based on the transactions performed (withdrawals/ deposits) by the customer.
  Implement the program by following the given steps.
  
	i. Prompt the user to input transaction type (Withdrawal/ Deposit)
	ii. Read the user input from the keyboard using getchar( ) function (w – withdrawals, d –
	deposits)
	iii. If the user input ‘w’ or ‘W’ , display message “You have selected to withdraw money”.
	If the user input‘d’ or ‘D’, display message “You have selected to deposit money”.
	Otherwise display an error message “You have selected an invalid transaction type”
	and terminate the program.
	iv. Modify the above program to input the bank balance and the amount.
	v. Based on the selected transaction type (withdrawal or deposit), display the new balance.
*/	
#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	char typeread;
	float balance;
	float amount;
	
	//ask user to enter the available bank balance
	printf("Enter the balance amount: ");
	scanf("%f", &balance);
    
    //ask user to enter the amount that need to deposit or withdrawal
	printf("Enter the amount that need to withdrawal or deposit:");
	scanf("%f" ,&amount);
    
    
	// taking input of single character using getchar() function
	printf("Enter the character w or d: ");
	scanf(" %c" ,&typeread);
    
    
	if (typeread=='w' || typeread=='W')
	{
		balance = balance - amount;
		printf("Your balance is %.2f" ,balance);
	}
	
	else if (typeread=='d' || typeread=='D')
	{
		balance = balance + amount;
		printf("Your balance is %.2f" ,balance);
	}
	else
	{
		printf("Error message");
	}
	
	
	return 0;
}
