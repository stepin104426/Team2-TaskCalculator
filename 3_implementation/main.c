#include <stdio.h>
#include "percentage.h"


void do_percentage();


void calc_opr()
{
	printf("\n             Welcome to C calculator \n\n");
	printf("******* Press 'Q' or 'q' to quit ");
	printf("the program ********\n");
	printf("***** Press 'H' or 'h' to display ");
	printf("below options *****\n\n");
	printf("Enter 'C' or 'c' to clear the screen and");
	printf(" display available option \n\n");

	printf("Enter A or a for Addition \n");
	printf("Enter S or s for Subtraction \n");
	printf("Enter M or m for Multiplication \n");
	printf("Enter D or d for Division \n");
	printf("Enter P or p for Percentage \n");
	printf("Enter Mod or mod for Modulus \n");
	printf("Enter F or f for Factorial \n");
	printf("Enter E or e for Exponential \n");
	printf("Enter Pr or pr for Checking prime \n");
}

int main(void)
{
	//int X = 1;
	char Calc_opr_input;

	calc_opr();

	switch(Calc_opr_input)
	{
		case 'A': 
		case 'a':// do_addition();
				break;
		case 'S': 
		case 's':// do_subtraction();
				break;
		case 'M': 
		case 'm':// do_multiplication();
				break;
		case 'D': case 'd':// do_division();
							break;
		case 'P': case 'p': do_percentage();
							break;
		case 'L': case 'l':// do_modulus();
							break;
		case 'F': case 'f':// do_factorial();
							break;
		case 'E': case 'e':// do_exponential();
							break;
		// case 'Pr': case 'pr': is_prime();
							// break;					
		// case 'Q': case 'q': exit(0);
		// 					break;
		case 'H': case 'h': calc_opr();
							break;
		// case 'C': case 'c': system("cls");
		// 					calc_opr();
							break;
		default : 
			// system("cls");
			printf("try again boi");
	printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");

	calc_opr();
	}

}
