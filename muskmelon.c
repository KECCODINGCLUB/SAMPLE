/**

// @Kuppam Engineering College 

// @KEC Coding Club

*/

/*

//Second Week Challenge.

*/

/**

 * @author N.K.CHARAN , M.AYATHULLAH  
 
 *Team_Name: #Riots-18

*/

#include<stdio.h>

#include<conio.h>

void main() { 
   
   int w=1,i=1;

   int result=0;

       clrscr();
    
         printf("\n Enter the weight:");

         scanf("%d",&w);                         // Scans the weight of the Muskmelon


                  for(i=1;i<=w/2;i++) {

                  if(i%2==0 && (w-i)%2==0) {    // Performs and checks the condition   
     
                  result=1;

                 }
          
          }

              if(result==1) {

                  printf("\n Yes It can be divided! ");

          } else {

                 printf("\n No It cannot be divided! ");

     }

getch();

}
