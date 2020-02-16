#include <iostream>
//The account
void account1() {
  int bal = 0;
  std::cout << "Welcome, Giorno.\n" << "Your balance is: " << bal << "\n";
  std::cout << "Would you like to make a deposit? Y/N\n";
  char choice;
  std::cin >>  choice;
  if (choice == 'Y' || choice == 'y') {
    std::cout << "Okay, how much would you like to deposit?";
    double dep = 0;
    std::cin >> dep;
    double bal = dep + bal;
    std::cout << "Your money has been deposited. Your balance is: " << bal;
  }
  else if (choice == 'N' || choice == 'n') {
    std::cout << "Okay then. How about withdrawl? Y/N\n";
    char alsochoice;
    std::cin >> alsochoice;
    if (alsochoice == 'Y' || alsochoice == 'y') {
    std::cout << "Okay, how much would you like to withdrawl?";
    double wdr = 0;
    std::cin >> wdr;
    double bal = bal - wdr;
    std::cout << "Your money has been withdrawn. Your balance is: " << bal;
    std::cout << "Thanks for banking with us! Goodbye!\n";
    }
    else{
      std::cout << "Okay then. Have a good day!\n";
    }
  }  
} 

//Checks the account number
void pinsystem() {
   std::cout << "Welcome to GenericBank. Please input your account number.\n";
   int accountguess;
   std::cin >> accountguess;
   int account1number = 45617078;
   if (accountguess == account1number) {
     account1();
   }  
   else {
     std::cout << "Sorry, but it's wrong.";
   }
}
