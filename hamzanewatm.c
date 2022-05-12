#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "transaction.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	//BALANCE INQUIRY
	//inquiries= account balance,change pin
	// sleep function sleeps the next thread for an amount of time
	//initial screen
	//DEFAULT PIN IS 2979
						int pin,transaction;
						int amount;
							int deposit;
						int linktransaction;
						int oldpin;
						int newpin;
						int verify;
						int transfer_amount;
						int choice;
						int receiving_account;
						float newbal;
						float balance=0;
						
						
						//function definition
						void starting(){
								printf("WELCOME TO THE ATM MACHINE\n");
						printf("DEFAULT PIN IS 2979\n");
							 while(pin!= 2979){
							 	sleep(1);
				printf("Input your four digit pin:");
				scanf("%4d" ,&pin);
				if(pin!=2979){
				printf("\nEnter a valid password\n");
				}
			}
			
				if(pin=2979){
	sleep(1);
	printf("\nKINDLY INPUT THE KIND OF TRANSACTION YOU WANT TO PERFORM\n1.WITHDRAWAL\n2.DEPOSIT\n3.BALANCE INQUIRY\n4.CHANGE PIN\n5.TRANSFER\n\n");
	scanf("%d" ,&transaction);
	
	switch(transaction){
		case 1:
			sleep(1);
			printf("Kindly input amount to withdraw:");
			scanf("%d" ,&amount);
			if(amount>balance){
				printf("YOU MIGHT WANT TO CHECK YOUR BALANCE\n");
				sleep(1);
				printf("Do you wish to proceed with another transaction?\nClick 1 to continue and 2 to end\n\n");
				scanf("%d" ,&linktransaction);
				
				if(linktransaction==1){
					starting();
				}
				
				
			}
			else{
				balance-=amount;
				printf("You withdrew %d\nYour current balance is %f Naira\n" ,amount,balance);
				sleep(1);
					printf("Do you wish to proceed with another transaction?\nClick 1 to continue and 2 to end\n\n");
				scanf("%d" ,&linktransaction);
					
				if(linktransaction==1){
					starting();
				}
				else if(linktransaction==2){
					end();
				}
				
				
			}
			break;
		case 2:
			printf("Input desired deposit amount:");
			scanf("%d" ,&deposit);
			
			balance+=deposit;
			printf("Your new balance is %4f Naira\n" ,balance);
			sleep(1);
					printf("Do you wish to proceed with another transaction?\nClick 1 to continue and 2 to end\n\n");
				scanf("%d" ,&linktransaction);
					
				if(linktransaction==1){
					starting();
				}
				break;
				
		case 3:
		printf("Your available balance is %4f Naira\n" ,balance);
		sleep(1);
			printf("Do you wish to proceed with another transaction?\nClick 1 to continue and 2 to end\n\n");
				scanf("%d" ,&linktransaction);
					
				if(linktransaction==1){
					starting();
				}
				break;
		
		case 4:
			sleep(1);
	    pin_pin(oldpin,newpin);
	    	printf("\nDo you wish to proceed with another transaction?\nClick 1 to continue and 2 to end\n\n");
				scanf("%d" ,&linktransaction);
					
				if(linktransaction==1){
					starting();
				}
				break;
		case 5:    
			sleep(1);
			transfer(receiving_account,transfer_amount,balance,choice,newbal);
				printf("\nDo you wish to proceed with another transaction?\nClick 1 to continue and 2 to end\n\n");
				scanf("%d" ,&linktransaction);
					
				if(linktransaction==1){
					starting();
				}
				break;
			
			
}
}
}
 void end(){
	printf("Alright Thank You..Please take your card.");
}
int main(){
	// function
	starting();
	oldpin==pin;
	end();
	
	return 0;
}


