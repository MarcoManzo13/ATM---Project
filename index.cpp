#include <iostream>
#include <cstdlib>
using namespace std;

void showMenu(){ // Crate a function that prints the interface for the user when called.
    cout << "--------MENU--------\n" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "\n--------------------" << endl;
}

int main()
{
    //check balance, deposit, withdraw, exit, show MENU
    int option; // Variable for the user to select which option of the menu he wants
    double balance = 1000; // Variable with initial value of 1000 given to the user


    do{
    showMenu();
    cout << "Chose an option: "; // Tell the user to show an option of the 4
    cin >> option; // Save the option in the variable "option"

    system("cls"); // comand to clear the console 

    switch (option)
    {
    case 1: // First Option
        cout << "The Balance is: " << balance << " $ \n" << endl; // Print the initial value of Balance to show the user
    break;
    
    case 2: // Second Option
        cout << "Deposit amount: "; // Trying to get the value of the new deposit
        double depositAmount; // Need a new variable to store that value
        cin >> depositAmount; // Save the value that the user entered
        balance += depositAmount; // Add the current balance with the new amount of the deposit
        cout << "The Balance is: " << balance << " $ \n" << endl; // Print the new value of Balance to show the user
    break;

    case 3: // Third Option
        cout << "Withdraw amount: "; // Getting the value of the new withdrawal
        double withdrawAmount; // Need a new variable to store that value
        cin >> withdrawAmount; // Save the value that the user entered
        if(withdrawAmount<=balance){ // Create an if statement to check wether the user has enough money for the withdrawal
            balance -= withdrawAmount; // Subtract the current balance with the new withdrawal
            cout << "The Balance is: " << balance << " $ \n" << endl; // Print the new value of Balance to show the user
        }else
        cout << "You dont have enough money in the account for a withdrawal of that size" << endl; // if the user doesnt have enought many this message will pop out
    break;

    default:
    break;

    }
    } while (option!=4); // If the user selects option 4 the program will close.

}