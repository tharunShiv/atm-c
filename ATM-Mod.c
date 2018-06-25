/**
Author: Tharun
Visit: https://tharunshiv.ml/
**/

    #include <stdio.h>
    #include <conio.h>

    long int withdraw;
    long int atmBal=12000;

    int choice;

    long int savBal=10000, chkBal=12000;

    void main()

    {
	int acc;


		printf("\n CHOOSE AN ACCOUNT TYPE TO WITHDRAW FROM :\n");

		printf("1. Checking Account \n2. Savings Account\n3. Cancel\n\n");

		scanf("%d", &acc);

		if(acc==1)
		{


		printf("\n Choose an amount to withdraw\n");

		printf("Choose the option \n1. 1000\t2. 2000\n\n3. 1500\t4. 2000\n\n5. 5000\t6. 10000\n\n7. 12000\t8. 15000\n\n9. Cancel\n\n");
		scanf("%d", &choice);

		switch(choice){

        case 1:
            withdraw = 1000;
            break;
        case 2:
            withdraw = 2000;
            break;
        case 3:
            withdraw = 1500;
            break;
        case 4:
            withdraw = 2000;
            break;
        case 5:
            withdraw = 5000;
            break;
        case 6:
            withdraw = 10000;
            break;
        case 7:
            withdraw = 12000;
            break;
        case 8:
            withdraw = 15000;
            break;
        case 9:

            printf("Cancelled");
            getch();
            break;
		}

		while(withdraw > atmBal){


		printf("\n INSUFFICENT BALANCE. \n PLEASE ENTER A DIFFERENT AMOUNT");
		printf("\n Choose an amount to withdraw\n");

		printf("Choose the option \n1. 1000\t2. 2000\n\n3. 1500\t4. 2000\n\n5. 5000\t6. 10000\n\n7. 12000\t8. 15000\n\n9.Cancel\n\n");
		scanf("%d", &choice);

		switch(choice){

        case 1:
            withdraw = 1000;
            break;
        case 2:
            withdraw = 2000;
            break;
        case 3:
            withdraw = 1500;
            break;
        case 4:
            withdraw = 2000;
            break;
        case 5:
            withdraw = 5000;
            break;
        case 6:
            withdraw = 10000;
            break;
        case 7:
            withdraw = 12000;
            break;
        case 8:
            withdraw = 15000;
            break;
        case 9:
            printf("Cancelled");
            getch();
            break;
		}


		}

		//if((atmBal-withdraw)<0){
		//
		//	printf("\n SORRY NO CASH \n");
		//	getch();
	//		break;
		//}

		    chkBal = chkBal - withdraw;
		    atmBal = atmBal - withdraw;
		    printf("\n\n PLEASE COLLECT CASH");

		    printf("\n YOUR SAVINGS ACCOUNT BALANCE IS %ld", savBal);
		    printf("\n YOUR CHECKING ACCOUNT BALANCE IS %ld", chkBal);
            printf("\n ATM BAlance %ld", atmBal);
            getch();



		}
		else if(acc==2)
		{

		printf("\n Choose an amount to withdraw\n");

		printf("Choose the option \n1. 1000\t2. 2000\n\n3. 1500\t4. 2000\n\n5. 5000\t6. 10000\n\n7. Cancel\n\n");
		scanf("%d", &choice);

		switch(choice){

        case 1:
            withdraw = 1000;
            break;
        case 2:
            withdraw = 2000;
            break;
        case 3:
            withdraw = 1500;
            break;
        case 4:
            withdraw = 2000;
            break;
        case 5:
            withdraw = 5000;
            break;
        case 6:
            withdraw = 10000;
            break;
        case 7:
            printf("Cancelled");
            getch();
            break;
		}

		while(withdraw > atmBal){


		printf("\n INSUFFICENT BALANCE. \n PLEASE ENTER A DIFFERENT AMOUNT");
		printf("\n Choose an amount to withdraw\n");

		printf("Choose the option \n1. 1000\t2. 2000\n\n3. 1500\t4. 2000\n\n5. 5000\t6. 10000\n\n7. Cancel\n\n");
		scanf("%d", &choice);

		switch(choice){

        case 1:
            withdraw = 1000;
            break;
        case 2:
            withdraw = 2000;
            break;
        case 3:
            withdraw = 1500;
            break;
        case 4:
            withdraw = 2000;
            break;
        case 5:
            withdraw = 5000;
            break;
        case 6:
            withdraw = 10000;
            break;
        case 7:
            printf("Cancelled");
            getch();
            break;
		}


		}

		//if((atmBal-withdraw)<0){
		//
		//	printf("\n SORRY NO CASH \n");
		//	getch();
	//		break;
		//}

		    savBal = savBal - withdraw;
		    atmBal = atmBal - withdraw;
		    printf("\n\n PLEASE COLLECT CASH");

		    printf("\n YOUR SAVINGS ACCOUNT BALANCE IS %ld", savBal);
		    printf("\n YOUR CHECKING ACCOUNT BALANCE IS %ld", chkBal);
            printf("\n ATM BAlance %ld", atmBal);
            getch();


		}
        else{

		printf("\n THANK U USING ATM");

        }
    }
