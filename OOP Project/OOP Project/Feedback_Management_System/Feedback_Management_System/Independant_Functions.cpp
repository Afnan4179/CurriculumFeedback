#include "Independant_Functions.h"

// Function to clear the console screen
void CLEAR_SCREEN()
{
    system("cls");  // Using a system command to clear the screen
}

// Function to exit the program with a message
void EXIT()
{
    cout << "\n\n\n";
    cout << "          __________________________________________________\n";
    cout << "         |    Terminating the Program in 1 second...!!!     |\n";
    cout << "         |__________________________________________________|\n";
    Sleep(1000); // Pausing execution for 1 second
}

// Function to display the title of the program
void TITLE()
{
    cout << "\n\n";
    cout << "              ________________________________________________________________\n";
    cout << "             |             SUMMER COURSE FEEDBACK MANAGEMENT SYSTEM           |\n";
    cout << "             |                 By Afnan Khan and Hira Zahid                   |\n";
    cout << "             |________________________________________________________________|\n";
    cout << "\n\n\n";
}


// Function to display the main menu or exit option
int MAIN_MENU_OR_EXIT(int choice)
{
    cout << "\n\n";
    cout << "          >> Please choose one of the following options:\n\n";
    cout << "           ____________________________________________" << endl;
    cout << "          |1. Return to Main Menu                      |" << endl;
    cout << "          |2. Exit                                     |" << endl;

    // Getting the user's input
    {
        cout << "\n          Answer: ";

        // Handling any potential errors with user input
        try
        {
            cin >> choice;

            // Checking if the choice is valid
            if ((choice == 2) || (choice == 1))
            {
                return choice;
            }
            else
            {
                throw choice; // Throwing an error for invalid input
            }
        }
        catch (int choice)
        {
            cout << '\a'; // Beeping sound to indicate an error
            cin.clear(); // 
            cin.ignore(256, '\n');
            choice = 0;
            CLEAR_SCREEN();
            cout << flush;

            // Displaying an error message and waiting before clearing the screen again
            for (int i = 3; i > 0; i--)
            {
                cout << "\n\n\n";
                cout << "          __________________________________________________\n";
                cout << "         |  Wrong Choice, TRY AGAIN in " << i << " seconds...!!!\n";
                cout << "         |__________________________________________________\n";
                Sleep(1000); // Pausing for 1 second
                CLEAR_SCREEN(); // Clearing the screen
            }

            TITLE(); // Displaying the title again
            MAIN_MENU_OR_EXIT(choice); // Again calling the function
        }
    }
}