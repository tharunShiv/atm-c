/**
Author: Tharun
Visit: https://tharunshiv.ml/
**/    

    #include <stdio.h>
    #include <conio.h>

    long int deposit, withdraw;
    long int atmBal=10000;

    int choice, pin, k;

    char transaction ='y';

    long int savBal=10000, chkBal=10000;
    int savLim = 10000;

    void main()

    {
	int acc;
	clrscr();
	while (pin != 1234)

	{

	    printf("ENTER YOUR SECRET PIN NUMBER: ");

	    scanf("%d", &pin);

	    if (pin != 1234)

	    printf("PLEASE ENTER VALID PASSWORD\n");

	}

	do

	{
	    clrscr();
	    printf("********Welcome to ATM Services Umamaheswari V**************\n");

	    printf("1. Check Balance\n");

	    printf("2. Withdraw Cash\n");

	    printf("3. Deposit Cash\n");

	    printf("4. Quit\n");

	    printf("********************************************\n\n");

	    printf("Enter your choice: ");

	    scanf("%d", &choice);

	    switch (choice)

	    {

	    case 1:

		clrscr();
		printf("\n YOUR SAVINGS ACC BALANCE IN Rs : %ld \n", savBal);
		printf("\n YOUR CHECKING ACC BALANCE IN Rs : %ld ", chkBal);
		 printf("\n atmbal %ld", atmBal);
		getch();
		break;

	    case 2:
		clrscr();
		printf("\n CHOOSE AN ACCOUNT TYPE TO WITHDRAW FROM :\n");

		printf("1. Checking Account \n 2. Savings Account\n");

		scanf("%d", &acc);

		if(acc==1)
		{

		clrscr();
		printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

		scanf("%ld", &withdraw);
		while(withdraw % 100 != 0 || withdraw > (chkBal-500)){
		  clrscr();
		  if (withdraw % 100 != 0)

		{

		    printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

		}

		else if (withdraw >(chkBal - 500))

		{

		    printf("\n INSUFFICENT BALANCE. \n PLEASE ENTER A DIFFERENT AMOUNT");

		}


		  printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

		  scanf("%ld", &withdraw);


		}
		if((atmBal-withdraw)<0){
			clrscr();
			printf("\n SORRY NO CASH \n");
			getch();
			break;
		}
		    clrscr();
		    chkBal = chkBal - withdraw;
		    atmBal = atmBal - withdraw;
		    printf("\n\n PLEASE COLLECT CASH");

		    printf("\n YOUR SAVINGS ACCOUNT BALANCE IS %ld", savBal);
		    printf("\n YOUR CHECKING ACCOUNT BALANCE IS %ld", chkBal);
		     printf("\n ATM BAlance %ld", atmBal);
		     getch();
		break;


		}
		else if(acc==2)
		{
		clrscr();
		printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

		scanf("%ld", &withdraw);

		while(withdraw > 10000 || withdraw % 100 != 0 || withdraw > (savBal-500)){
		clrscr();
		if(withdraw>10000){
		    printf("\n SORRY , YOUR LIMIT FOR WITHDRAWAL IS 10000 only \n ");
		}

		else if (withdraw % 100 != 0)

		{

		    printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

		}

		else if (withdraw >(savBal - 500))

		{

		    printf("\n INSUFFICENT BALANCE. \n PLEASE ENTER A DIFFERENT AMOUNT");

		}


		  printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

		  scanf("%ld", &withdraw);


		}

		    if((atmBal-withdraw)<0){
			clrscr();
			printf("\n SORRY NO CASH \n");
			getch();
			break;
		    }
		    clrscr();
		    savBal = savBal - withdraw;
		    atmBal = atmBal - withdraw;
		    printf("\n\n PLEASE COLLECT CASH");

		    printf("\n YOUR SAVINGS ACCOUNT BALANCE IS %ld", savBal);
		    printf("\n YOUR CHECKING ACCOUNT BALANCE IS %ld", chkBal);
		     printf("\n ATM BALANCE %ld", atmBal);
		    getch();
		break;

		}
		else
		{
		clrscr();
		printf("YOU HAVE ENTERED THE WRONG OPTION... LOGGING OFF..\n");
		break;
		}


	    case 3:
		clrscr();
		printf("\n ENTER THE AMOUNT TO DEPOSIT");

		scanf("%ld", &deposit);

			    savBal = savBal + deposit;
			    atmBal = atmBal + deposit;

		printf("YOUR SAVINGS BALANCE IS %ld", savBal);

		break;

	    case 4:
		clrscr();
		printf("\n THANK U USING ATM");

		break;

	    default:

		printf("\n INVALID CHOICE");

	    }
	    clrscr();
	    printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");

	    fflush(stdin);

	    scanf("%c", &transaction);

	    if (transaction == 'n'|| transaction == 'N')

			k = 1;

	} while (!k);

        printf("\n\n THANKS FOR USING OUT ATM SERVICE");

    }