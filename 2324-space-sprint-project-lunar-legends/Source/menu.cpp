#include "../Header Files/menu.h"


void menu(int choice)
{

    cout << endl;
    cout << " 1 - Start the game - Easy" << endl;
    cout << " 2 - Start the game - Normal" << endl;
    cout << " 3 - Start the game - Hard" << endl;
    cout << " 4 - Exit" << endl;
    cout << " Enter your choice and press return: " << endl;
    cin >> choice;

    if (choice == 1)
        void questionsEasy();
    else if (choice == 2)
        void questionsNormal();
    else if (choice == 3)
        void questionsHard();
}