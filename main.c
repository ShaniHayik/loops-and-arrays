#include "myBank.h"
#include <stdio.h>


int main () {
double amount;
int numberAccount, num;
char c;
int x,y=0;

//the client types letter in order to perform
while (c != 'E') {    
printf("\n Transaction type? ");
	scanf(" %c" , &c);

	switch(c){
		case 'O': 
		printf("type num of money ");
		x=scanf("%lf" , &amount);
		if (x != 1) {
		printf("type a currect number please"); 
		}
		else newAccount(amount);
		break;
		

		case 'B': 
		printf("type your number account ");
		x=scanf("%d" , &numberAccount);
		if (x != 1) {
		printf("type a currect number please"); 
		}
		else balance(numberAccount);
		break;

		case 'D': 
		printf("type your number account ");
		x=scanf("%d", &numberAccount);
		if (x != 1) {
		printf("type a currect number please"); 
		}
		else printf("type your deposit ");
		y=scanf("%lf" , &amount);
		if (y != 1) {
		printf("type a currect number please"); 
		}
		else Deposit(amount, numberAccount);
		break;

		case 'W': 
		printf("type your number account ");
		x=scanf("%d",&numberAccount);
		if (x != 1) {
		printf("type a currect number please"); 
		}
		else printf("type your withrawal ");
		y=scanf("%lf" , &amount);
		if (y != 1) {
		printf("type a currect number please"); 
		}
		else Withrawal(amount, numberAccount);
		break;

		case 'C': 
		printf("type your number account ");
		x=scanf("%d" , &numberAccount);
		if (x != 1) {
		printf("type a currect number please"); 
		}
	    else closeAccount(numberAccount);
		break;

		case 'I': 
		printf("type your extra ");
		x=scanf( "%d", &num);
		if (x != 1) {
		printf("type a currect number please"); 
		}
	    else Extra(num);
		break;

		case 'P': 
	    openAccounts();
		break;

		case 'E': 
	   closeAccounts();
		return 0;

		default:
		printf("you type wrong letter, try again");
		break;
	}
}
	return 0;
}

