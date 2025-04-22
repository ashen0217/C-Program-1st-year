#include <ctype.h>
#include <stdio.h>

struct Bank {
  char accountNum[50];
  char name[50];
  char transcType;
  float amount;
};

int main() {
	
	int i = 0, maxId = 0, minId = 0;
	float depositTot = 0, WithdrawTot = 0, depositMax =0, withdrawMin = 0;

	struct Bank person[5];

    for (i = 0; i < 5; i++) {
    printf("\nEnter Account Number : ");
    scanf("%s", person[i].accountNum);

    printf("Enter First name of the Person : ");
    scanf("%s", person[i].name);

    printf("Enter Transcation type(W-withdraw/D-Deposit) :");
    scanf(" %c", &person[i].transcType);

    person[i].transcType = toupper(person[i].transcType);

    printf("Enter Amount : ");
    scanf("%f", &person[i].amount);

    if (person[i].transcType == 'W') {
      WithdrawTot += person[i].amount;
    } else if (person[i].transcType == 'D') {
      depositTot += person[i].amount;
    }
  }

  	depositMax = person[0].amount;
  	for (i = 0; i < 5; i++) {
    if (depositMax < person[i].amount && person[i].transcType == 'D') {
        depositMax = person[i].amount;
        maxId = i;
      }

    }

  	withdrawMin=person[0].amount;
  	for (i = 0 ; i < 5 ; i++ ){
    if (withdrawMin > person[i].amount && person[i].transcType == 'W') {
      withdrawMin = person[i].amount;
      minId = i;
    }
  }

  	printf("\nTotal Deposit Amount : %.2f\n", depositTot);
  	printf("\nTotal Withdrawl Amount : %.2f\n", WithdrawTot);
  	printf("\nName of the Customer with Maximum Deposits : %s\n",person[maxId].name);
  	printf("\nName of the customer with Minimum Withdrawals :%s \n",person[minId].name);
  	
  	
  	return 0;
}






