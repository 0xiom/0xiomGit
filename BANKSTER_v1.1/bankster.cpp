//Includes for I/O and String functionality
#include <iostream>
#include <string>
#include "bfuncs.h"


int main() 
{

//Loops menu system	
while(true)
{

     //BANKSTER main menu
     std::cout << "WELCOME TO BANKSTER v1.1\n\n"
   	       << "1 - Bank Services\n"
	       << "2 - Careers at Bankster\n"
	       << "3 - Bank Information\n"
	       << "4 - Exit\n\n"
       	       << "Selection:___\b\b";
     mainMenu();
	  
     	  //Conditional for main menu choices
          switch(sel1)
          {
	  
          //Main Menu Choice 1 - Bank Services 
          case 1: std::cout << "Bank Services:\n\n"
		    	    << "1 - Account Services\n"
		    	    << "2 - Loan Services\n"
		    	    << "3 - Transfer Services\n"
		    	    << "4 - Stonks\n"
		    	    << "5 - Main Menu\n\n"
		            << "Selection:___\b\b";
	  	  mainMenu();
			
		       //Conditional for Bank Services
		       switch(sel1)
		       {
			
		       //Bank Services Choice 1 - Account Services
		       case 1: std::cout << "Account Services:\n\n"
	                                 << "1 - Create Account\n"
	                                 << "2 - Delete Account\n"
	                                 << "3 - View Account\n\n"
	                                 << "Selection:___\b\b";
			       mainMenu();		          
		       break;
		       
		       //Bank Services Choice 2 - Loan Services
		       case 2: std::cout << "Loan Services:\n\n"
			                 << "1 - View Loan Details\n"
			                 << "2 - Pay Loan\n"
			                 << "3 - Apply for Loan\n"
			                 << "4 - Loan Calculator\n\n"
					 << "Selection:___\b\b";
			       mainMenu();
		       break;
		       
		       //Bank Services Choice 3 - Transfer Services
		       case 3: std::cout << "Transfer Services coming soon!\n\n";
		       break;
		       
		       //Bank Services Choice 4 - Stonks
		       case 4: std::cout << "STONKS coming soon!\n\n";       
		       break;
		       
		       //Bank Services Choice 5 - Main Menu
		       case 5: system("cls");
		       break;
		       
		       default: std::cout << "Error!!!\n\n";

		       }

          break;
	  
	  //Main Menu Choice 2 - Careers at Bankster
          case 2: std::cout << "Congratulations! You now work for BANKSTER.\n\n"
	      	      	    << "Return to Main Menu? (Y/N) ___\b\b";
	          std::cin  >> sel2;
	          std::cout << "\n";
	          yesNo();
	  break;

	  //Main Menu Choice 3 - Bank Information
          case 3: std::cout << "Bankster Enterprises\n"
			    << "Established 2020 - Japes Waps\n\n"
			    << "www.banksterbigmmoney.com\n"
			    << "WE PROMISE WE ARE NOT A SCAM\n\n\n"
			    << "Return to Main Menu? (Y/N) ___\b\b";
	          std::cin  >> sel2;
	          std::cout << "\n";
	          yesNo();
	  break;
	  
	  //Main Menu Choice 4 - Exit
          case 4:  std::cout << "Thanks for visiting BANKSTER. Please come back!\n\n";
                   system("pause");
		   system("cls");
          return 0;

	  default: std::cout << "Error - Not a Selection\n";

}
}


}                                
