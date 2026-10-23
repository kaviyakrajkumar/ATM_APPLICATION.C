#include<stdio.h>
int main()
{
 int pin=2324;
 int enteredpin;
 int choice;
 float balance=5000;
 float amount;
 printf("=====WElLCOME TO ATM=====\n");
 printf("Enter your PIN:");
 scanf("%d", &enter Pin);
 if(enteredPin != Pin)
 {
    printf("Invalid PIN!\n");
    return 0;
 }
 printf("\nLogin successful!\n");
 do
 {
      printf("\n===== ATM MENU =====\n");
      printf("1. check balance\n");
      printf("2. deposit money\n");
      printf("3. withdraw money\n");
      printf("4. exit\n");
      printf("Enter your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
	  case 1:
	       printf("Your Balance: Rs.%.2f\n",balance);
	       break;
	  case 2:
	       printf("Enter deposit amount :");
	       scanf("%f",&amount);
	       if(amount>0)
	       {
		  balance = balance + amount;
		  printf("Money Deposited Successfully!\n");
		  printf("New Balance: Rs.%.2f\n",balance);
	       }
	       else
	       {
		printf("Invalid Amount!\n");
	       }
	       break;
	       case 3:
		   printf("Enter withdrawal amount:");
		   scanf("%f",&amount);
		   if (amount <= 0)
		   {
		      print("Invalid Amount!\n");
		   }
		   else if (amount <= balance)
		   {
		     balance = balance - amount;
		     printf("Please collect your cash.\");
		     printf("Remaining Balance: Rs.%2f\n",balance);
		   }
		   else
		   {
		     printf("Insufficient Balance!\n");
	       case 4:
		    printf("Thank You for Using ATM!\n");
		    break;
	       default:
		    printf("Invalid Choice!\n");
	  }
      } while(choice!=4);
      return 0;
 }