#include "../Header Files/menu.h"
#include "../Header Files/questions.h"


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
        questionsEasy();
    else if (choice == 2)
        questionsNormal();
    else if (choice == 3)
        questionsHard();
}