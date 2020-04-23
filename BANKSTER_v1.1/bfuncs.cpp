#include <iostream>
#include <cstdlib>
#include <string>
#include "bfuncs.h"

//sel1 is seeking integers for selection input, sel2 is seeking characters for selection input
int sel1 = 0;
char sel2 = '0';

//Function adds new line and clears back to main menu, comment in body is for smarter functionality eventually
void mainMenu()
{ 

     std::cin  >> sel1;
     std::cout << "\n";     //Create conditional if int use sel1, if char use sel2
     system("cls");

}

//Logic for "Return to Main Menu? Y/N" interactions, comment in body for smarter functionality eventually
int yesNo()
{
 while(true)
 {

  switch(sel2)
  {	 

      case 'Y':          
      case 'y': system("cls");
      break;

      case 'N':
      case 'n': std::cout << "Thanks for visiting BANKSTER. Please come back!\n\n";
                system("pause"); //
   	        system("cls");   //Make a function
	        exit(0);
      break; 
      default:  std::cout << "Error! Please reselect.\n\n";
		system("pause");
		system("cls");

  }

      break;
 
 } 
return 0;

}
