#include <stdio.h>
double accounts [2][50]={0};

//this function returns number with only 2 digits after the point
double twodigits (double num) {
  num = num*100;
  int num2 = num;
  num = num2;
  num = num / 100;
  
  return num;
}

//this function open new account 
void newAccount (double newBalance) {
if (newBalance<0) {
printf("please enter a positive number"); 
return;
}
newBalance=twodigits(newBalance);
int i =0;
for (i=0; i<=50; i++) {
if (accounts[1][i] ==0) {
accounts[0][i] = newBalance; accounts[1][i] = 1;
printf("Number account is:" "%d", i+901); return;
    }   
  }
printf("\n too much accounts!");
}


//this function returns your balance in your account
void balance (int numberAccount) {  
int temp = numberAccount - 901;
if ((numberAccount<901) || (numberAccount>951)) {
  printf("please enter a right number account");   
}      
else if (accounts[1][temp] == 1) 
{
    printf("\n Balance account is:" "%0.2lf", accounts[0][temp]);
}
else { printf("\n Not exists!"); }
}


//this function deposit to your bank account
void Deposit (double deposit, int numberAccount) {
  if ((numberAccount<901) || (numberAccount>951)) {
  printf("please enter a right number account");   
}
  if (deposit<0) {
  printf("please enter a positive number");
  return;
  }
  else if (numberAccount > 900) {
    int temp = numberAccount - 901;
    if (accounts[1][temp] == 1) {
    accounts[0][temp]+=deposit;
    accounts[0][temp] = twodigits(accounts[0][temp]);
    printf("\n Balance account is:" "%0.2lf",  accounts[0][temp]);
  }
}
else {
   printf("\n Not exists!"); 
   }
}


//this function withrawal to your bank account
void Withrawal (double withrawal, int numberAccount) {
  if ((numberAccount<901) || (numberAccount>951)) {
  printf("please enter a right number account");   
}
  if (withrawal<0) {
    printf("please enter a positive number");
    return;
  }
  double temp=0.0;
	for (int i=0; i<=50; i++)
   {
		if ((numberAccount ==  i+901) && (accounts[1][i] ==1))
     {
		  temp=(accounts[0][i]-withrawal);
		  if (temp<0)
      {
			  printf("You dont have enough money"); return;
             }
			else {
      temp = twodigits(temp);
			accounts[0][i]=temp;
			printf("Balance account is:" "%0.2lf", accounts[0][i]); return;
			     }
         } 
      }  
    printf("Not exist!");                                    
}


//this function closes specific account
void closeAccount (int numberAccount) {
  if ((numberAccount<901) || (numberAccount>951)) {
  printf("please enter a right number account");   
}
int temp = numberAccount - 901;
if (accounts[1][temp] == 1) 
{
  accounts[1][temp]=0; accounts[0][temp]=0;
  printf("closed!");
}
else {
  printf("Not exist!");
}
}


//this function adds interest to all accounts
void Extra (double extra) { 
if (extra < 0){ 
printf("please type positive number");  
return;   
}
double temp, temp2;
int i=0;
temp2 = (extra / 100);
	for (i=0; i<=50; i++) {
  if (accounts[1][i] == 1) {
        temp =  (accounts[0][i] * temp2);
        temp = twodigits(temp);
        accounts[0][i] += temp;    
        printf("\n %lf" , accounts[0][i]);
    }
  }
}


//this function prints all open accounts
void openAccounts () {                       
int flag = 1;
	for (int i=0; i<=50; i++) {
        if (accounts[1][i] == 1) {
        flag=0;
        printf("\n Account number: %d" , i+901);
        printf("\n The balance: %0.2lf" , accounts[0][i]);
        }    
    }
if (flag==1) printf("no have!");     
}


//this functioon closes all accounts and exit
void closeAccounts () {
int i=0;
if (accounts[1][i] ==1) {
	for (i=0; i<=50; i++) {
     accounts[1][i] = 0;
     accounts[0][i] = 0; 
    }  
}
return;
}  




























