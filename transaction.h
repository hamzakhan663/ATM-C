#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pin_pin(int oldpin,int newpin){
		printf("Enter your old pin:");
		scanf("%d" ,&oldpin);
		if(oldpin!=2979){
			printf("You may want to recheck your pin.");
		}
		else if(oldpin==2979){
			printf("Enter your new four digit pin:");
			scanf("%d" ,&newpin);
		}
		printf("Your new four digit pin is %d\n" ,newpin);
		printf("Your old pin %d has been changed to %d" ,oldpin,newpin);
		sleep(2);
		return(newpin);
}

int transfer(int receiving_account,int transfer_amount,float balance,int choice,float newbal){
	printf("Your balance is %f Naira\n" ,balance);
	printf("\nEnter 10 digits account number:");
	scanf("%d" ,&receiving_account);
	printf("How much do you want to transfer?\n");
	scanf("%d"  ,&transfer_amount);
	printf("\nYou are about to send %d Naira to %d",transfer_amount,receiving_account);
	sleep(1);
	printf("\nAre you sure you want to proceed?\n1.Yes\n2.No\n\n");
	scanf("%d" ,&choice);
	if(choice==1){
		if(transfer_amount>balance){
			printf("\nYou might want to check your balance");
		}
		else if(transfer_amount<balance){
			sleep(1);
			printf("\nYou succesfully transferred %d Naira to %d\n" ,transfer_amount,receiving_account);
			newbal=balance-transfer_amount;
			sleep(1);
			printf("Your new balance is %f Naira\n" ,newbal);
		}
	}
	else if(choice==2){
		printf("Please take your card.");
	}
    return balance;
}
