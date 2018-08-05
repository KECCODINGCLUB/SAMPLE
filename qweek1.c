/**

// @Kuppam Engineering College 

// @KEC Coding Club

*/

/*

//Third Week Challenge.

*/

/**

 * @Authors {

 N.K.CHARAN , M.AYATHULLAH 

};

 * Team_Name: #Riots-18

*/

#include<stdio.h>

#include<conio.h>

void main() {

  int k, n, w;

  int total;

  clrscr();

	 printf("\n Enter the values of Oranges:");

	    scanf("%d %d %d", &k, &n, &w);		// Scans the values

  total = k * w * (w + 1) / 2;                        // Checks the conditions

  printf("The Borrowed Amount from her friend is is \n %d", (total - n));      //Displays the values

  getch();

}
