#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
std::vector<int> mynumbers {45617078};
std::string name;
//The account
void account(std::string nam,int bal) {
  std::cout << "Welcome, " << nam << ".\n" << "Your balance is: " << bal << "\n";
  std::cout << "Would you like to make a deposit? Y/N\n";
  char choice;
  std::cin >>  choice;
  if (choice == 'Y' || choice == 'y') {
    std::cout << "Okay, how much would you like to deposit?\n";
    double dep = 0;
    std::cin >> dep;
    bal = dep + bal;
    std::cout << "Your money has been deposited. Your balance is: " << bal;
    std::cout << "Would you like to do another transaction? Y/N\n";
    char ch;
    std::cin >> ch;
    if (ch == 'Y' || ch == 'y'){
      account(name, 0);
    }  
    else {
      std::cout << "See ya later!\n";
      exit(0);
    }  
  } 
  else if (choice == 'N' || choice == 'n') {
    std::cout << "Okay then. How about withdrawl? Y/N\n";
    char alsochoice;
    std::cin >> alsochoice;
    if (alsochoice == 'Y' || alsochoice == 'y') {
     std::cout << "Okay, how much would you like to withdrawl?";
     double wdr = 0;
     std::cin >> wdr;
     bal = bal - wdr;
     std::cout << "Your money has been withdrawn. Your balance is\n " << bal;
     std::cout << "Would you like to do another transaction? Y/N\n";
     char ch;
     std::cin >> ch;
     if (ch == 'Y' || ch == 'y'){
      account(name, 0);
     }  
     else {
      std::cout << "See ya later!\n";
      exit(0);
     } 
    }
  }     
}  
void makeanaccount(){
   std::cout << "What is your name?";
   std::cin >> name;
   std::cout << name << "?" << "Nice name!";
   std::cout << "How much would you like to deposit?";
   std::cin >> int deposit2;
   std::cout << "You have deposited £" << deposit2 << ".\n"
   int accountnum = rand();
   mynumbers.push_back(accountnum);
   std::cout << "Your account number is " << accountnum << "Have a good day!";
   std::cout << "Would you like to do another transaction? Y/N\n";
   char ch;
   std::cin >> ch;
   if (ch == 'Y' || ch == 'y'){
    account(name, deposit2);
   }  
   else {
      std::cout << "See ya later!\n";
      exit(0);
   }   
}
void pinsystem() {
   std::cout << "Please input your account number.\n";
   int accountguess;
   std::cin >> accountguess;
   if(accountguess == mynumbers[0]){
     account(name, 0);
   } 
   else {
     std::cout << "Sorry, but it's wrong.";
   }
}
void chicken() {
  std::cout << "Welcome to Bank. Press 1 if you already have an account, or 2 if you do not.\n";
  int ch;
  std::cin >> ch;
  if (ch == 1){
    pinsystem();
  } 
  else{
    makeanaccount();
  }
}
